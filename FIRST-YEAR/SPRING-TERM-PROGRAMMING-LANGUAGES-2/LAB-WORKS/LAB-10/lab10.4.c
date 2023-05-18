#include<stdio.h>
#include<stdlib.h>
struct node{
	int number;
	struct node *next;
};
typedef struct node node;
node* changeFirstAndLast(node*);
node *head=NULL,*p;
int i=0;
int main(){
	int x;
	printf("ENTER VALUES TO STOP ENTER -1\n");
	while(1){
		printf("%d.NUMBER:",i+1);
		scanf("%d",&x);
		if(x==-1){
			head=changeFirstAndLast(head);
			break;	
		}
		if(head==NULL){
			head=(node*)malloc(sizeof(node));
			p=head;
			p->number=x;
			p->next=NULL;
		}
		else{
			p->next=(node*)malloc(sizeof(node));
			p=p->next;
			p->number=x;
			p->next=NULL;	
		}
		i++;
	}
	p=head;
	i=0;
	while(p!=NULL){
		printf("%d.ELEMENT:%d\n",i+1,p->number);
		p=p->next;
		i++;
	}
	return 0;
}
node* changeFirstAndLast(node *head){
	node *x,*y=head;
	while(y->next!=NULL){
		x=y;
		y=y->next;
	} 
	y->next=head->next;
	x->next=head;
	x->next->next=NULL;
	printf("\n");
	return y;
}
