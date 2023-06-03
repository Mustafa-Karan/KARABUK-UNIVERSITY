// SWAP QUIZ WEEK 13 
#include<stdio.h>
struct client{
	int id;
	char name[40];
	char surname[40];
	double balance;
}; 
typedef struct client cl;
void enterrecords();
void list();
void swaprecords(FILE*);
FILE *ptr;
cl empty={0,"","",0.0};
int main(){
	int i=0;
	if((ptr=fopen("info.txt","w"))==NULL)
		printf("FILE COULDN'T OPEN");
	else{
		for(i;i<100;i+=1)
			fwrite(&empty,sizeof(cl),1,ptr);
		fclose(ptr);
	}
	enterrecords();
	list();
	swaprecords(ptr);
	fclose(ptr);
	list();
	return 0;
}
void enterrecords(){
	int id;
	cl x;
	if((ptr=fopen("info.txt","r+"))==NULL)
		printf("FILE COULDN'T OPEN");
	else{
		printf("TO STOP ENTER ID 0\n");
		while(1){
			printf("WHICH RECORD WILL BE ENTERED 1-100:");
			scanf("%d",&id);
			if(id==0)break;
			fseek(ptr,(id-1)*sizeof(cl),SEEK_SET);
			fread(&x,sizeof(cl),1,ptr);
			if(x.id==0){
				fseek(ptr,(id-1)*sizeof(cl),SEEK_SET);
				x.id=id;
				printf("NAME:");scanf("%s",x.name);
				printf("SURNAME:");scanf("%s",x.surname);
				printf("BALANCE:");scanf("%lf",&x.balance);
				fwrite(&x,sizeof(cl),1,ptr);
			}
			else
				printf("THIS RECORD HAS BEEN CREATED ALREADY\n");
		}
	}
	fclose(ptr);	
}
void list(){
	cl x;
	if((ptr=fopen("info.txt","r"))==NULL)
		printf("FILE COULDN'T OPEN");
	else{
		rewind(ptr);
		while(!feof(ptr)){
			fread(&x,sizeof(cl),1,ptr);
			if(x.id!=0)
				printf("ID:%d\nNAME:%s\nSURNAME:%s\nBALANCE:%lf\n",x.id,x.name,x.surname,x.balance);
		}
	}
	fclose(ptr);	
}
void swaprecords(FILE *ptr){//*ptr requared the teacher said that we have to do it in this way for the quiz
	cl temp1,temp2;
	FILE *p=ptr;
	int tempid1,tempid2;
	printf("TO SWAP ENTER\n");
	printf("ID 1:"); scanf("%d",&tempid1);
	printf("ID 2:"); scanf("%d",&tempid2);
	if((ptr=fopen("info.txt","r+"))==NULL)
		printf("FILE COULDN'T OPEN");
	else{
		fseek(p,(tempid1-1)*sizeof(cl),SEEK_SET);
		fread(&temp1,sizeof(cl),1,p);
		fseek(p,(tempid2-1)*sizeof(cl),SEEK_SET);
		fread(&temp2,sizeof(cl),1,p);
		fseek(p,(tempid1-1)*sizeof(cl),SEEK_SET);
		fwrite(&temp2,sizeof(cl),1,ptr);
		fseek(p,(tempid2-1)*sizeof(cl),SEEK_SET);
		fwrite(&temp1,sizeof(cl),1,ptr);
	}
fclose(p);	
}
