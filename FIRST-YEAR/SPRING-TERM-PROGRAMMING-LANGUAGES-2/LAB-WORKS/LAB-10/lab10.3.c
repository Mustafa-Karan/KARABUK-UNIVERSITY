#include<stdio.h>
#include<stdlib.h>
struct node{
	int number;
	struct node *next;
};
typedef struct node node;
node* deletenum(node*);
node *head=NULL,*p;
int i=0;
int main(){
	int x;
	printf("ENTER VALUES TO STOP ENTER -1\n");
	while(1){
		printf("%d.NUMBER:",i+1);
		scanf("%d",&x);
		if(x==-1){
			head=deletenum(head);
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
node* deletenum(node *head){
	int j=0;
	node *k=head,*l;
	while(j!=i/2){
		l=k;
		k=k->next;
		j++;
	}
	l->next=l->next->next;
	free(k);
	return head;
}
