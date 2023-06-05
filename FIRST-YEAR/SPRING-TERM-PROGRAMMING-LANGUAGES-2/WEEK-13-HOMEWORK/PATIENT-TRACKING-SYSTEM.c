#include<stdio.h>
struct info1{
	int patientnum;
	int id;
};
typedef struct info1 infoa;
struct info2{
	int patientnum;
	int id;
	char name[30];
	int age;
	char ilness[30];
};
typedef struct info2 infob;

FILE *file1,*file2;
infoa info1;
infob info2;

void menu();
void create();
void addlast();
void listall();
void listspecific();
void update();
void deletespecific();

int main(){
	menu();	
	return 0;
}
void menu(){
	int choice;
	printf("1-CREATE FILE 2-ADD RECORDS 3-LIST ALL RECORDS 4-LIST SPECIFIC RECORD 5-UPDATE RECORDS 6-DELETE SPECIFIC RECORD 7-EXIT :");
	scanf("%d",&choice);
	switch(choice){
		case 1:create(); break;
		case 2:addlast();break;
		case 3:listall();break;
		case 4:listspecific();break;
		case 5:update();break;
		case 6:deletespecific();break;
		case 7:printf("EXITING...");exit(0); break;
		default:printf("INVALID CHOICE\n"); menu();break;
	}
}
void create(){
	infob emptyrecords={0,0,"",0,""};
	int choice,i;
	if((file1=fopen("file1.txt","r"))!=NULL){
		printf("THERE IS A FILE IF YOU RECREATE ALL RECORDS WILL BE DELETED\n");
		printf("TO ADD OLD ONE PRESS 1 TO RECREATE PRESS 0 :");
		scanf("%d",&choice);
		switch(choice){
			case 1:addlast(); break;
			case 0:
				if((file1=fopen("file1.txt","w"))==NULL)
					printf("THE FILE COULDN'T OPEN\n");
				if((file2=fopen("file2.txt","w"))==NULL)
					printf("THE FILE COULDN'T OPEN\n");
				for(i=0;i<50;i+=1)
					fwrite(&emptyrecords,sizeof(infob),1,file2);
				fclose(file1);
				fclose(file2);
				menu();	
			break;
			default: printf("INVALID CHOICE\n"); create(); break;
		}
	}
	else{
		if((file1=fopen("file1.txt","w"))==NULL)
			printf("THE FILE COULDN'T OPEN\n");
		if((file2=fopen("file2.txt","w"))==NULL)
			printf("THE FILE COULDN'T OPEN\n");
		for(i=0;i<50;i+=1)
			fwrite(&emptyrecords,sizeof(infob),1,file2);	
	}
	fclose(file1);
	fclose(file2);
	menu();
}
void addlast(){
	if((file1=fopen("file1.txt","r"))!=NULL){
		fclose(file1);
		file1=fopen("file1.txt","a");
		if((file2=fopen("file2.txt","r+"))==NULL){
			printf("THE FILE 2 COULDN'T OPEN\n");
			menu();
		}
		else{
			printf("TO STOP ENTER PATIENT NUMBER ctrl-z\n");
			while(1){
				printf("ENTER PATIENT NUMBER 1-50:"); scanf("%d",&info1.patientnum);
				if(!feof(stdin)==0){
					fclose(file1);
					fclose(file2);
					menu();
					break;
				} 
				if(info1.patientnum<1||info1.patientnum>50) addlast();
				fseek(file2,(info1.patientnum-1)*sizeof(infob),SEEK_SET);
				printf("ENTER PATIENT ID:"); scanf("%d",&info1.id);
				printf("ENTER PATIENT NAME:"); scanf("%s",info2.name);
				printf("ENTER PATIENT AGE:"); scanf("%d",&info2.age);
				printf("ENTER PATIENT'S ILNESS:"); scanf("%s",info2.ilness);
				fprintf(file1,"%d\n%d\n",info1.patientnum,info1.id);
				info2.patientnum=info1.patientnum;
				info2.id=info1.id;
				fwrite(&info2,sizeof(infob),1,file2);
			}
		}
	}
	else{
		printf("FILE NOT EXIST FIRST CREATE\n");menu();
	}
}
void listspecific(){
	int id;
	if((file1=fopen("file1.txt","r"))==NULL){
		printf("THE FILE 1 COULDN'T OPEN\n");
		menu();
	}
	if((file2=fopen("file2.txt","r"))==NULL){
		printf("THE FILE 2 COULDN'T OPEN\n");
		menu();
	}
	else{
		printf("ENTER PATIENT IDENTIFICATION NUMBER:");
		scanf("%d",&id);
		rewind(file1);
		fscanf(file1,"%d\n%d\n",&info1.patientnum,&info1.id);
		rewind(file1);
		while(!feof(file1)){
			fscanf(file1,"%d\n%d\n",&info1.patientnum,&info1.id);
			if(info1.id==id){
				fseek(file2,(info1.patientnum-1)*sizeof(infob),SEEK_SET);
				fread(&info2,sizeof(infob),1,file2);
				printf("PATIENT NUMBER:%d\nID:%d\nNAME:%s\nAGE:%d\nILNESS:%s\n",info2.patientnum,info2.id,info2.name,info2.age,info2.ilness);
			}
		}
	}
	fclose(file1);
	fclose(file2);
	menu();
}
void listall(){
	if((file1=fopen("file1.txt","r"))==NULL){
		printf("THE FILE 1 COULDN'T OPEN\n");
		menu();
	}
	if((file2=fopen("file2.txt","r"))==NULL){
		printf("THE FILE 2 COULDN'T OPEN\n");
		menu();
	}
	else{
		rewind(file1);
		fscanf(file1,"%d\n%d\n",&info1.patientnum,&info1.id);
		rewind(file1);
		while(!feof(file1)){
				fscanf(file1,"%d\n%d\n",&info1.patientnum,&info1.id);
				fseek(file2,(info1.patientnum-1)*sizeof(infob),SEEK_SET);
				fread(&info2,sizeof(infob),1,file2);
				printf("PATIENT NUMBER:%d\nID:%d\nNAME:%s\nAGE:%d\nILNESS:%s\n",info2.patientnum,info2.id,info2.name,info2.age,info2.ilness);
		}
	}
	fclose(file1);
	fclose(file2);
	menu();
}
void update(){
	int id,choice;
	if((file1=fopen("file1.txt","r"))==NULL){
		printf("THE FILE 1 COULDN'T OPEN\n");
		menu();
	}
	if((file2=fopen("file2.txt","r+"))==NULL){
		printf("THE FILE 2 COULDN'T OPEN\n");
		menu();
	}
	else{
		printf("ENTER PATIENT IDENTIFICATION NUMBER:");
		scanf("%d",&id);
		rewind(file1);
		fscanf(file1,"%d\n%d\n",&info1.patientnum,&info1.id);
		rewind(file1);
		while(!feof(file1)){
			fscanf(file1,"%d\n%d\n",&info1.patientnum,&info1.id);
			if(info1.id==id){
				fseek(file2,(info1.patientnum-1)*sizeof(infob),SEEK_SET);
				printf("1 UPDATE ID 2-UPDATE NAME 3-UPDATE AGE 4-UPDATE ILNESS:");
				scanf("%d",&choice);
				switch(choice){
					case 1:
						printf("ENTER PATIENT ID:");scanf("%d", &info2.id);break;
					case 2:
						printf("ENTER PATIENT NAME:");scanf("%s", info2.name);break;
					case 3:
						printf("ENTER PATIENT AGE:");scanf("%d", &info2.age);break;
					case 4:
						printf("ENTER PATIENT'S ILLNESS:");scanf("%s", info2.ilness);break;
					default:
						printf("INVALID CHOICE"); update();break;
				}
				fwrite(&info2,sizeof(infob),1,file2);
				printf("UPDATE SUCCESFULL\nPATIENT NUMBER:%d\nID:%d\nNAME:%s\nAGE:%d\nILNESS:%s\n",info2.patientnum,info2.id,info2.name,info2.age,info2.ilness);
			}
		}
	}
	fclose(file1);
	fclose(file2);
	menu();	
}
void deletespecific(){
	FILE *tmp;
	infob empty={0,0,"",0,""};
	int id;
	if((tmp=fopen("tempdata.txt","w"))==NULL){
		printf("DELETE CAN NOT BE SUCCESFULL\n");
		menu();	
	}
	if((file1=fopen("file1.txt","r"))==NULL){
		printf("THE FILE 1 COULDN'T OPEN\n");
		menu();
	}
	if((file2=fopen("file2.txt","r+"))==NULL){
		printf("THE FILE 2 COULDN'T OPEN\n");
		menu();
	}
	printf("ENTER A ID TO DELETE:");scanf("%d",&id);
	rewind(file1);rewind(file2);
	while(1){
		if(feof(file1)){
			printf("THIS ID NOT FOUND\n");menu();break;
		} 
		fscanf(file1,"%d\n%d\n",&info1.patientnum,&info1.id);
		if(info1.id==id){
			rewind(file1);
			fseek(file2,(info1.patientnum-1)*sizeof(infob),SEEK_SET);
			fwrite(&empty,sizeof(infob),1,file2);
			while(!feof(file1)){
				fscanf(file1,"%d\n%d\n",&info1.patientnum,&info1.id);
				if(info1.id!=id)
					fprintf(tmp,"%d\n%d\n",info1.patientnum,info1.id);
			}
		break;
		}
	}
	fclose(file1);
    fclose(file2);
    fclose(tmp);
	remove("file1.txt");
	file1=tmp;
    rename("tempdata.txt","file1.txt");
	menu();
}
