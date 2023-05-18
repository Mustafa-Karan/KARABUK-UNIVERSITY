#include<stdio.h>
#include<stdlib.h>
struct node { 
int age; 
struct node * next; 
}; 

typedef struct node node;

node* deleteNode(node*, int); 
node *head=NULL,*p;
int i=0;

int main(){
	int x;
	printf("ENTER STUDENT AGES TO STOP ENTER -1\n");
	while(1){
		printf("%d.STUDENT'S AGE:",i+1);
		scanf("%d",&x);
		if(x==-1){
			printf("ENTER AGE THAT WILL BE DELETED:");
			scanf("%d",&x);
			head=deleteNode(head,x); ;
			break;	
		}
		if(head==NULL){
			head=(node*)malloc(sizeof(node));
			p=head;
			p->age=x;
			p->next=NULL;
		}
		else{
			p->next=(node*)malloc(sizeof(node));
			p=p->next;
			p->age=x;
			p->next=NULL;	
		}
		i++;
	}
	p=head;
	i=0;
	while(p!=NULL){
		printf("%d.STUDENT'S AGE:%d\n",i+1,p->age);
		p=p->next;
		i++;
	}
	return 0;
}
node* deleteNode(node *head, int age){
	node *x=head,*y=head;
	int k=0;
	while(y->next!=NULL){
		if(y->age==age) k++;
		if(k==2){
			x->next=y->next;
			free(y);			
			break;
		}
		x=y;
		y=y->next;
	} 
	printf("\n");
	return head;
}
