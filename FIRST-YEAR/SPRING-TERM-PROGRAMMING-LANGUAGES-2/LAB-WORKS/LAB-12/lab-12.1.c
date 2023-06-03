#include<stdio.h>
#include<string.h>
void createfile();
void findname();
void addrecord();
void menu();
void addlast();
void list();
struct student{
	int no;
	char name[40];
	char dep[40];
};
typedef struct student st;
st std;
FILE *f;

int main(){
	menu();
	return 0;
}
void createfile(){
	int choice;
	if((f=fopen("student.txt","r"))!=NULL){
		printf("THERE IS ALREADY A FILE IF YOU RECREATE THIS FILE ALL RECORDS WILL BE DELETED\n");
		printf("TO RECREATE ENTER 1:");
		printf("\nTO CONTINUE OLD ONE ENTER 0:");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				if((f=fopen("student.txt","w"))==NULL)
				printf("FILE COULDN'T OPEN");
				fclose(f);
			break;
			case 0:
			 	return;
			default:
				printf("WRONG CHOICE");
				createfile();
			break;
		}
	}	
	else{
		if((f=fopen("student.txt","w"))==NULL)
			printf("FILE COULDN'T OPEN");
		fclose(f);
	}
}
void addrecord(){
	if((f=fopen("student.txt","r"))!=NULL){
		printf("THERE IS ALREADY A FILE IF ALL RECORDS WILL ADDED END OF THE FILE\n");
		addlast();
		return;
		}
	if((f=fopen("student.txt","r+"))==NULL)
		printf("FILE COULDN'T OPEN\n");
	else{
		printf("TO STOP ENTER STRUDENT NUMBER ctrl-z\n");
		printf("ENTER STUDENT NUM:"); scanf("%d",&std.no);
		if(!feof(stdin)==0) return;
		printf("ENTER STUDENT NAME:"); scanf("%s",std.name);
		printf("ENTER STUDENT DEPARTMENT:"); scanf("%s",std.dep);
		while(1){
			fprintf(f,"%s\n%d%s\n",std.name,std.no,std.dep);
			printf("ENTER STUDENT NUM:"); scanf("%d",&std.no);
			if(!feof(stdin)==0){
				fclose(f); return;
			}
			printf("ENTER STUDENT NAME:"); scanf("%s",std.name);
			printf("ENTER STUDENT DEPARTMENT:"); scanf("%s",std.dep);
		}
	}
	fclose(f);
}
void findnum() {
    int a;
    if ((f = fopen("student.txt", "r")) == NULL) {
        printf("FILE COULDN'T OPEN\n");
        return;
    }
    printf("ENTER A NUMBER: ");
    scanf("%d",&a);
    rewind(f);
    while (!feof(f)) {
        fscanf(f, "%s\n%d%s\n", std.name,&std.no, std.dep);
        if (a == std.no)
            printf("\nNUMBER: %d\nNAME: %s\nDEPARTMENT: %s\n", std.no, std.name, std.dep);
    }
    fclose(f);
}
void findname() {
    int a;
    char name[40];
    if ((f = fopen("student.txt", "r")) == NULL) {
        printf("FILE COULDN'T OPEN\n");
        return;
    }
    printf("ENTER A NAME: ");
    scanf("%s",name);
    rewind(f);
    while (!feof(f)) {
        fscanf(f, "%s\n%d%s\n", std.name,&std.no, std.dep);
        if (a=strcmp(name,std.name)==0)
            printf("\nNUMBER: %d\nNAME: %s\nDEPARTMENT: %s\n", std.no, std.name, std.dep);
    }
    
    fclose(f);
}
void addlast(){
	if((f=fopen("student.txt","a"))==NULL)
		printf("FILE COULDN'T OPEN\n");
	else{
		printf("TO STOP ENTER STRUDENT NUMBER ctrl-z\n");
		printf("ENTER STUDENT NUM:"); scanf("%d",&std.no);
		if(!feof(stdin)==0) return;
		printf("ENTER STUDENT NAME:"); scanf("%s",std.name);
		printf("ENTER STUDENT DEPARTMENT:"); scanf("%s",std.dep);
		while(1){
			fprintf(f,"%s\n%d%s\n",std.name,std.no,std.dep);
			printf("ENTER STUDENT NUM:"); scanf("%d",&std.no);
			if(!feof(stdin)==0){
				fclose(f); return;
			}
			printf("ENTER STUDENT NAME:"); scanf("%s",std.name);
			printf("ENTER STUDENT DEPARTMENT:"); scanf("%s",std.dep);
		}
	}	
}
void list(){
	if ((f = fopen("student.txt", "r")) == NULL) {
        printf("FILE COULDN'T OPEN\n");
        return;
    }
    rewind(f);
    while (!feof(f)) {
        fscanf(f, "%s\n%d%s\n", std.name,&std.no, std.dep);
        printf("\nNUMBER: %d\nNAME: %s\nDEPARTMENT: %s\n", std.no, std.name, std.dep);
    }
    fclose(f);
}
void menu(){
	int choice;
	while(1){
		printf("1-CREATE A FILE 2-ADD RECORD 3-FIND USING NAME 4-FIND USING NUMBER 5-LIST ALL RECORDS 6-EXIT\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:createfile(); break;
			case 2:addrecord(); break;
			case 3:findname(); break;
			case 4:findnum(); break;
			case 5:list(); break;
			case 6:exit(0); break;
		}
	}
}
