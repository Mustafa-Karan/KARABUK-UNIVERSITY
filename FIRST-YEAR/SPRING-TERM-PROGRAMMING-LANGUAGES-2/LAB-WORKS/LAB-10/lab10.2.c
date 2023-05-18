#include<stdio.h>
#include<stdlib.h>

struct node* cutlastaddhead(struct node*); 
struct node { 
int number; 
struct node * next; 
}; 

typedef struct node node;
node *head=NULL,*p;

int main(){
	int i=0,x;
	printf("ENTER VALUES TO STOP ENTER -1\n\n");
	while(1){
		printf("ENTER %d. ELEMENT:",i+1);
		scanf("%d",&x);
		if(x==-1) break;
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
	head=cutlastaddhead(head); 
	p=head;
	i=0;
	while(p!=NULL){
		printf("\n%d.ELEMENT:%d",i+1,p->number);
		p=p->next;
		i++;
	}
	return 0;
}
node* cutlastaddhead(node* head){
	node *q=head,*k;
	while(1){
		if(q->next->next==NULL) break;
		k=q;
		q=q->next;
	}
	q->next->next=head;
	head=q->next;
	k->next->next=NULL;
	free(q->next);
	return head;
}
