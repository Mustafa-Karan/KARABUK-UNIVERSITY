#include<stdio.h>
#include<stdlib.h>
struct node{
	int number;
	struct node *next;
};

typedef struct node n;
n *head=NULL,*p,*newnode;
 int main(){
	int i=0;
	printf("ENTER NUMBERS TO STOP ENTER -1\n");
	while(1){
		if(head==NULL){
			newnode=(n*)malloc(sizeof(n));
			head=newnode;
			printf("ENTER %d. NUMBER\n",i+1);
			scanf("%d",&head->number);
			if(head->number==-1) break;
			head->next=NULL;
			p=head;
			i++;
		}
		else{
			newnode=(n*)malloc(sizeof(n));
			printf("ENTER %d. NUMBER\n",i+1);
			scanf("%d",&newnode->number);
			i++;
			if(newnode->number==-1) break;
			if(newnode->number%2==1){
				newnode->next=head;
				head=newnode;
				p=head;
			}
			else if(newnode->number%2==0){
				while(p->next!=NULL) p=p->next;
				p->next=newnode;
				newnode->next=NULL;
			}
		}	
	}
	i=0;
	p=head;
	while(p!=NULL){
		printf("%d.NUMBER:%d\n",i+1,p->number);
		p=p->next;
		i++;
	}
	free(p);
	free(head);
	free(newnode);				
	return 0;
}
