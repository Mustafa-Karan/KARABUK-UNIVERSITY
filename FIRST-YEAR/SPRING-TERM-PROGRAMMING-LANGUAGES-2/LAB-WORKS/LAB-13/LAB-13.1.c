#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student{
	int id;
	char name[30];
	char surname[30];
	char department[30];
};
typedef struct student st1;

struct studentt{
	int id;
	char name[30];
	char surname[30];
	char department[30];
	struct student *next;
};
typedef struct studentt st2;

struct list{
	struct list *head;
};
typedef struct list headfile;
headfile list1;
st2 *head=NULL,*p=NULL;
st1 zerofinder;
st1 empty = {0, "", "", ""};

FILE *file1,*listfile;

void menu();
void create();
void addlast();
void listall();
void listspecific();
void update();
void deletespecific();
void deletefile();
void fileTOlinkedlist();
void seelinkedlist();

static int x=0,y=0;

int main(){
	menu();	
	return 0;
}
void menu(){
	int choice;
	printf("1-CREATE FILE\n2-ADD RECORDS\n3-LIST ALL RECORDS\n4-LIST SPECIFIC RECORD\n5-UPDATE RECORDS\n6-DELETE SPECIFIC RECORD\n7-DELETE FILE\n8-FILE TO LINKED LIST\n9-SEE LINKED LIST\n10-EXIT\nCHOICE:");
	scanf("%d",&choice);
	switch(choice){
		case 1:create(); break;
		case 2:addlast();break;
		case 3:listall();break;
		case 4:listspecific();break;
		case 5:update();break;
		case 6:deletespecific();break;
		case 7:deletefile();break;
		case 8:fileTOlinkedlist();break;
		case 9:seelinkedlist();break;
		case 10:printf("EXITING...");exit(0); break;
		default:printf("INVALID CHOICE\n"); menu();break;
	}
}
void create(){
	int choice,i;
	if((file1=fopen("file1.txt","r"))!=NULL){
		printf("THERE IS A FILE IF YOU RECREATE ALL RECORDS WILL BE DELETED\n");
		printf("TO ADD OLD ONE PRESS 1 TO RECREATE PRESS 0 :");
		scanf("%d",&choice);
		switch(choice){
			case 1:addlast(); break;
			case 0:
				printf("HOW MANY STUDENTS ARE IN THE CLASS");
				scanf("%d",&x);
				if((file1=fopen("file1.txt","w"))==NULL)
					printf("THE FILE COULDN'T OPEN\n");
				else{
					for(i=0;i<x;i+=1)
						fwrite(&empty,sizeof(st1),1,file1);
					fclose(file1);
					y=0;
					menu();	
				}
			break;
			default: printf("INVALID CHOICE\n"); create(); break;
		}
	}
	else{
		printf("HOW MANY STUDENTS ARE IN THE CLASS");
		scanf("%d",&x);
		if((file1=fopen("file1.txt","w"))==NULL)
			printf("THE FILE COULDN'T OPEN\n");
		else{
			for(i=0;i<x;i+=1)
				fwrite(&empty,sizeof(st1),1,file1);
			fclose(file1);
		}
		menu();
	}
}
void addlast(){
	int choice,i,z,id;
	if(y==x){
		printf("THE FILE IS FULL IF YOU WANT TO ADD EXTRA PRESS 1 TO EXIT PRESS 0:");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("%d STUDENT HAVE EXIST IN FILE HOW MANY STUDENT WILL BE ADD:",x);
				scanf("%d",&choice);
				x+=choice;
				if((file1=fopen("file1.txt","a"))==NULL)
					printf("FILE CAN NOT OPEN\n");
				for(i=y;i<x;i+=1)
					fwrite(&empty,sizeof(st1),1,file1);
				fclose(file1);
				addlast();
			break;
			case 0:menu();
			default:printf("INVALID CHOICE\n"); addlast();break;
		}
	}
	if((file1=fopen("file1.txt","r+"))==NULL){
		printf("FILE 1 COULDN'T OPEN");
		fclose(file1);
		menu();
	}
	else{
		printf("TO STOP ENTER STUDENT NUMBER ctrl-z\n");
			while(1){
				if(y==x)
					break;
				if(y+1==x)
					printf("LAST RECORD !!!\n");
				rewind(file1);
				z=0;
				while(!feof(file1)){
					fread(&zerofinder,sizeof(st1),1,file1);
					if(zerofinder.id==0){
						fseek(file1,(z-1)*sizeof(st1),SEEK_SET);
						break;
					} 
					z+=1;
				} //THIS WHILE FINDS EMPTY PLACE IF USER DELETE A SPECIFIC RECORD THERE IS 1 PLACE TO RECORD
					
				printf("ENTER NUMBER:"); scanf("%d",&id);
				if(id<=0){
					printf("STUDENT NUMBER <= 0 ENTER AGAIN\n");
					fclose(file1);
					addlast();
				}
				if(feof(stdin)!=0){
					printf("%d STUDENT IS LEFT IN YOUR FILE\n",x-y);
					fclose(file1);
					menu();
					break;
				}
				zerofinder.id=id;
				printf("ENTER NAME:"); scanf("%s",zerofinder.name);
				printf("ENTER SURNAME:"); scanf("%s",zerofinder.surname);
				printf("ENTER DEPARTMENT:"); scanf("%s",zerofinder.department);
				fwrite(&zerofinder,sizeof(st1),1,file1);
				y+=1;
			}
			fclose(file1);
			menu();
		}
}		
void listspecific(){
	int id;
	if((file1=fopen("file1.txt","r"))==NULL){
		printf("THE FILE 1 COULDN'T OPEN\n");
		menu();
	}
	else{
		printf("ENTER ID:");
		scanf("%d",&id);
		rewind(file1);
		while(1){
			fread(&zerofinder,sizeof(st1),1,file1);
			if(zerofinder.id==id&&zerofinder.id>0){
				printf("ID:%d\nNAME:%s\nSURNAME:%s\nDEPARTMENT:%s\n",zerofinder.id,zerofinder.name,zerofinder.surname,zerofinder.department);
				fclose(file1);
				menu();
				break;
			}
			if(feof(file1)){
				printf("ID NOT FOUND\n");
				fclose(file1);
				menu();
				break;
			}
		}
	}
}	
void listall(){
	if((file1=fopen("file1.txt","r"))==NULL){
		printf("THE FILE 1 COULDN'T OPEN\n");
		menu();
	}
	else{
		rewind(file1);
		while(1){
			fread(&zerofinder,sizeof(st1),1,file1);
			if(feof(file1)){
				fclose(file1);
				menu();
				break;
			}
			if(zerofinder.id>0)
				printf("ID:%d\nNAME:%s\nSURNAME:%s\nDEPARTMENT:%s\n",zerofinder.id,zerofinder.name,zerofinder.surname,zerofinder.department);
		}
	}
}
void update(){
	int id,choice,x=0,i;
	if((file1=fopen("file1.txt","r+"))==NULL){
		printf("THE FILE COULDN'T OPEN\n");
		menu();
	}
	else{
		printf("ENTER ID:");
		scanf("%d",&id);
		if(id<=0){
			printf("ID CAN NOT BE <=0\n");
			update();
		}
		rewind(file1);
		while(1){
			fread(&zerofinder,sizeof(st1),1,file1);
			x+=1;
			if(zerofinder.id==id){
				printf("1-NEW ID 2-NEW NAME 3-NEW SURNAME 4-NEW DEPARTMENT");				
				scanf("%d",&choice);
				switch(choice){
					case 1:
						printf("ENTER NEW ID:");scanf("%d", &zerofinder.id);
						if(zerofinder.id<=0){
							printf("NEW ID <=0 TRY AGAIN\n");update();
						}
					break;
					case 2:
						printf("ENTER NEW NAME:");scanf("%s",zerofinder.name);break;
					case 3:
						printf("ENTER NEW SURNAME:");scanf("%s",zerofinder.surname);break;
					case 4:
						printf("ENTER NEW DEPARTMENT:");scanf("%s",zerofinder.department);break;
					default:
						printf("INVALID CHOICE"); update();break;
				}
				fseek(file1,(x-1)*sizeof(st1),SEEK_SET);
				fwrite(&zerofinder,sizeof(st1),1,file1);
				printf("UPDATE SUCCESFULL\n");
				fclose(file1);
				menu();
				break;
			}
			if(feof(file1)){
				printf("ID NOT FOUND\n");
				fclose(file1);
				menu();
				break;
			}
		}
	}
}
void deletespecific(){
	int id;
	if((file1=fopen("file1.txt","r+"))==NULL){
		printf("THE FILE 1 COULDN'T OPEN\n");
		menu();
	}
	printf("ENTER A ID TO DELETE:");scanf("%d",&id);
	if(id<=0){
		printf("ID CAN NOT BE <=0\n");
		deletespecific();
		}
	rewind(file1);
	while(1){
		fread(&zerofinder,sizeof(st1),1,file1);
		if(zerofinder.id==id){
			fseek(file1,(id-1)*sizeof(st1),SEEK_SET);
			fwrite(&empty,sizeof(st1),1,file1);
			y--;
			fclose(file1);
			menu();
		break;
		}
		if(feof(file1)){
			printf("THIS ID NOT FOUND\n");menu();break;
		} 
	}
}
void deletefile(){
	int choice;
	printf("ARE YOU SURE THAT? PRESS 1 TO EXIT PRESS 0:");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			if (remove("file1.txt")==0) 
				printf("REMOVE SUCCESFULL\n");
			else 
       			printf("REMOVE UNSUCCESFULL\n");
   			x=0; 
			y=0;
			fclose(file1);
			menu();
		break;
		case 0:
			menu();
		break;
		default:
			printf("INVALID CHOICE\n");deletefile();
		break;
	}
}
void fileTOlinkedlist(){
	if(head==NULL){
		head=(st2*)malloc(sizeof(st2));
		p=head;
	}
	if((file1=fopen("file1.txt","r"))==NULL){
		printf("FILE 1 COULDN'T OPEN\n");
		menu();
	}
		rewind(file1);
		fread(&zerofinder,sizeof(st1),1,file1);
		while(!feof(file1)){
			p->id=zerofinder.id;
			strcpy(p->name,zerofinder.name);
			strcpy(p->surname,zerofinder.surname);
			strcpy(p->department,zerofinder.department);
			p->next=NULL; 
			p->next=(st2*)malloc(sizeof(st2));
			p=p->next;
			fread(&zerofinder,sizeof(st1),1,file1);
		}
		p->next=NULL;
		if((listfile=fopen("listfile.txt","w"))==NULL){
			printf("LIST FILE COULDN'T OPEN\n");
			menu();
		}
		else{
			list1.head=head;
			fwrite(&list1,sizeof(headfile),1,listfile);
			fclose(listfile);
			fclose(file1);
			head=NULL;
			menu();
		}	
}
void seelinkedlist(){
//IF I WANT TO OPEN THIS FUNCTION FIRST AFTER CLOSING PROGRAM LISTFILE.TXT ALREADY EXIST BUT IT IS NOT WORKING
	listfile=fopen("listfile.txt","r");
	rewind(listfile);
	if(listfile==NULL){
		printf("LIST FILE COULDN'T OPEN\n");
		menu();
	}
	else{
		fread(&list1,sizeof(headfile),1,listfile);
		head=list1.head;
		while(1){
			if(head->id!=0){//I CAN NOT FULLY SOLVE THAT PART THIS SOLUTIN IS TEMPORARY
				printf("ID:%d\n",head->id);
				printf("NAME:%s\n",head->name);
				printf("SURNAME:%s\n",head->surname);
				printf("DEPARTMENT:%s\n",head->department);
			}
			head=head->next;
			if(head->next==NULL){
				break;
			}
		}
		fclose(listfile);
		head=NULL;	
		menu();
	}	
}
