#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct students{
	char name[50];
	int no;
	float midgrd;
	float fingrd;
	struct students *next;
};

typedef struct students st;

void menu();
void newANDaddRecord();
void listrecords();
void updaterecords();
void average();
void beststudent();
void deletespesific();
void deleteall();

st *head=NULL;
static int students=0;

int main(void){
	menu();
	return 0;
}
//-------------------------------------------------------------------------------------------------
void menu(void){
	int choice;
	do{
		printf("1-NEW RECORD  2-LIST RECORD  3-UPDATE RECORDS  4-AVERAGE  5-BEST STUDENT  6-DELETE SPESIFIC  7-DELETE ALL  8-EXIT\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:newANDaddRecord();break;
			case 2:listrecords();break;
			case 3:updaterecords();break;
			case 4:average();break;
			case 5:beststudent();break;
			case 6:deletespesific();break;
			case 7:deleteall();break;
			case 8:exit(0);
			default: printf("WRONG CHOICE TRY AGAIN\n");break;
		}
	}while(choice!=8);
}
//-------------------------------------------------------------------------------------------------
void newANDaddRecord(void) {
    st *p, *q, *newnode;
    int choice, del, news, k, noadd,afterbefore,c;
    printf("1-NEW RECORD  2-ADD A RECORD TO SPECIFIC PLACE\n");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            if (students != 0) {
                printf("A LIST HAS BEEN CREATED ALREADY. NEW RECORDS WILL BE ADDED AFTER THE LAST RECORD.\n");
                printf("IF YOU WANT TO DELETE ALL OLD RECORDS, PRESS 0. TO CONTINUE WITH THE OLD ONES, PRESS 1:");
                scanf("%d", &del);
                if (del == 0) deleteall(head);   
            }
            printf("HOW MANY STUDENTS WILL BE ADDED:");
            scanf("%d", &news);
            p = head;
            for (k = 0; k < news; k++) {
                newnode = (st*)malloc(sizeof(st));
                printf("NAME:"); scanf("%s", newnode->name);
                printf("NO:"); scanf("%d", &newnode->no);
                printf("MIDTERM GRADE:"); scanf("%f", &newnode->midgrd);
                printf("FINAL GRADE:"); scanf("%f", &newnode->fingrd);
                newnode->next = NULL;
				if (students == 0) {
                    head = newnode;
                    p = head;
                } else {
                    while (p->next != NULL) p = p->next;
                    p->next = newnode;
                    p = newnode;
                }
                students++;
            }
        break;
        case 2:
            if (students == 0) {
                printf("THERE IS NO RECORD TO LIST. FIRST, CREATE A LIST.\n"); return;
            }printf("TO ADD AFTER ENTER HAS ALREADY ENTERED NUMBER-BEFORE ENTER NEW STUDENT NUMBER\nCHOOSE AFTER-1 BEFORE-2:");
            scanf("%d",&afterbefore);
            printf("ENTER A STUDENT NUMBER:");
            scanf("%d", &noadd);
        
            switch(afterbefore){
	            case 1:
					p = head;
		            while (p != NULL) {
		                if (p->no == noadd) break;
		                q = p;
		                p = p->next;
		            }
		            if (p == NULL) {
		                printf("THE STUDENT NUMBER YOU ENTERED DOES NOT EXIST IN THE LIST.\n"); return;
		            }break;
		        case 2:
		        	p = head;
		            while (p != NULL) {
		                if (p->no > noadd) break;
		                q=p;
		                p = p->next;
		            }
		            if (p == NULL) {
		               printf("THE STUDENT NUMBER YOU ENTERED THE BIGGEST NUMBER IN THE LIST .\n"); 
		               printf("IF YOU WANT TO ADD BEGINNING ENTER 1 EXIT ENTER 0: .\n");
					   scanf("%d",&c);
					   switch(c){
					   	case 1:p=head; break;
					   	case 0:break;
					   } 
		
		           }
		            newnode = (st*)malloc(sizeof(st));
		            newnode->next=p;
		            if(head==p){
		            	head=newnode;
					}
					else{
						q->next=newnode;
						newnode->next=p;
					}
		            printf("NAME:"); scanf("%s", newnode->name);
           			printf("NO:"); scanf("%d", &newnode->no);
           	 		printf("MIDTERM GRADE:"); scanf("%f", &newnode->midgrd);
           		 	printf("FINAL GRADE:"); scanf("%f", &newnode->fingrd);
           			students++;
           		 	return;	        	
			}
            newnode = (st*)malloc(sizeof(st));
            printf("NAME:"); scanf("%s", newnode->name);
            printf("NO:"); scanf("%d", &newnode->no);
            printf("MIDTERM GRADE:"); scanf("%f", &newnode->midgrd);
            printf("FINAL GRADE:"); scanf("%f", &newnode->fingrd);
            newnode->next = p->next;
            p->next = newnode;
            students++;
        break;
        default: printf("INVALID CHOICE.\n"); break;
    }
}
//-------------------------------------------------------------------------------------------------
void listrecords(void){
	int i=0,choice,stunum1,stunum2;
	float mid,fin;
	st *p=head;
	if(students==0){
		printf("THERE IS NO RECORD TO LIST FIRST CREATE A LIST\n\n"); return;
	}
	printf("1-STANDART LIST  2-STUDENT NUMBER LIST  3-MIDTERM AND FINAL LIST\n\nCHOICE:");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			while(p!=NULL){
				printf("%d.RECORD\n\n",i+1);
				printf("NAME:%s\n",p->name);
				printf("NO:%d\n",p->no);
				printf("MIDTERM GRADE:%f\n",p->midgrd);
				printf("FINAL GRADE:%f\n\n",p->fingrd);
				p=p->next; i++;
			}
		break;
		case 2:
			printf("ENTER STARTING STUDENT NUMBER:"); scanf("%d",&stunum1);
			printf("ENTER ENDING STUDENT NUMBER:"); scanf("%d",&stunum2);
			while(p!=NULL){
				if(p->no>=stunum1&&p->no<=stunum2){
					printf("%d.RECORD\n\n",i+1);
					printf("NAME:%s\n",p->name);
					printf("NO:%d\n",p->no);
					printf("MIDTERM GRADE:%f\n",p->midgrd);
					printf("FINAL GRADE:%f\n\n",p->fingrd);
				}
					p=p->next; i++;
			}
		break;
		case 3:
			printf("ENTER MIN MIDTERM GRADE:"); scanf("%f",&mid);
			printf("ENTER MIN FINAL GRADE:"); scanf("%f",&fin);
			while(p!=NULL){
				if(p->midgrd>=mid&&p->fingrd>=fin){
					printf("%d.RECORD\n\n",i+1);
					printf("NAME:%s\n",p->name);
					printf("NO:%d\n",p->no);
					printf("MIDTERM GRADE:%f\n",p->midgrd);
					printf("FINAL GRADE:%f\n\n",p->fingrd);
				}
					p=p->next; i++;
			}
		break;
	}
}	
//-------------------------------------------------------------------------------------------------			
void updaterecords(){
	st *p=head;
	int upno,choice;
	if(students==0){
		printf("THERE IS NO RECORD TO LIST FIRST CREATE A LIST\n\n"); return;
	}
	printf("ENTER STUDENT NUMBER TO UPDATE:"); scanf("%d",&upno);
	while(p!=NULL&&p->no!=upno) p=p->next;
	if(p->no==upno){
		printf("1-NAME  2-NO  3-MIDTERM  4-FINAL\n"); scanf("%d",&choice);
		switch(choice){
			case 1:printf("ENTER:");scanf("%s",p->name);printf("UPDATE SUCCESFULL\n\n");break;
			case 2:printf("ENTER:");scanf("%d",&p->no);printf("UPDATE SUCCESFULL\n\n");break;
			case 3:printf("ENTER:");scanf("%f",&p->midgrd);printf("UPDATE SUCCESFULL\n\n");break;
			case 4:printf("ENTER:");scanf("%f",&p->fingrd);printf("UPDATE SUCCESFULL\n\n");break;
		}
	}
	else if(p==NULL){
		printf("NOT FOUND\n\n"); return;
	}
}
//-------------------------------------------------------------------------------------------------		
void average(){
	st *p=head;
	float avg1,avg2;
	if(students==0){
		printf("THERE IS NO RECORD TO LIST FIRST CREATE A LIST\n\n"); return;
	}
	while(p!=NULL){
		avg1+=p->midgrd; avg2+=p->fingrd; p=p->next;
	}
	printf("%d STUDENT IN THE CLASS\n",students);
	printf("CLASS AVERAGE:%f\n\n",(avg1/students)*0.4+(avg2/students)*0.6);
}	
//-------------------------------------------------------------------------------------------------	
void beststudent(){
	st *p=head,*q;
	float avg=0,best=0.0;
	if(students==0){
		printf("THERE IS NO RECORD TO LIST FIRST CREATE A LIST\n\n");
		return;
	}
	while(p!=NULL){
		avg=(p->fingrd*0.6)+(p->midgrd*0.4);
		if(avg>=best){
			best=avg; q=p;
		}
		p=p->next;
	}
	printf("BEST STUDENT\n");
	printf("NAME:%s\n",q->name);
	printf("NO:%d\n",q->no);
	printf("MIDTERM GRADE:%f\n",q->midgrd);
	printf("FINAL GRADE:%f\n",q->fingrd);
	printf("BEST AVERAGE:%f\n\n",best);
}
//-------------------------------------------------------------------------------------------------							
void deletespesific(){
	st *p=head,*q=NULL;
	int delno;
	if(students==0){
		printf("THERE IS NO RECORD TO LIST FIRST CREATE A LIST\n"); return;
	}
	printf("ENTER A STUDENT NUMBER TO DELETE:"); scanf("%d",&delno);
	if(delno==p->no){
		head=p->next; 
		free(p); students--;
		printf("SUCCESFULL\n\n"); return;// THIS RETURN IS VERY IMPORTANT 
	}
	while(p!=NULL&&p->no!=delno){
		q=p; p=p->next;
	}
	if(p->no==delno){
		q->next=p->next; free(p); students--;
		printf("SUCCESFULL\n\n");
	}
	else if(p==NULL){
		printf("NOT FOUND\n\n");
	}
return;		
}
//-------------------------------------------------------------------------------------------------						
void deleteall(){
	char x;
	if(students==0){
		printf("THERE IS NO RECORD TO DELETE FIRST CREATE A LIST\n\n");	return;
	}
	printf("ARE YOU SURE?\nALL LIST WILL BE DELETED PRESS ENTER\n\n");
	if((x=getch())==13) free(head);
	head=NULL; students=0;
}
