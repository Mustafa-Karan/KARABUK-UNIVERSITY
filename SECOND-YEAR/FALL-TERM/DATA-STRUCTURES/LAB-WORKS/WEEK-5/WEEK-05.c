#include <stdio.h>
#include<stdlib.h>
#define STACK_SIZE 100
struct stack{
	char characters[STACK_SIZE];
	int top;
};
typedef struct stack str;
void initialize(str *);
void push(str *,char);
void pop (str *);

int main(){
	FILE *f;//File pointer
	f=fopen("check.txt","r");//Just readable
	str *st=(str*)malloc(sizeof(str));//We create a stack in main
	initialize(st);
	char ch;//what will do the program push or pop? in switch case
	while(fscanf(f,"%c",&ch)!=EOF){//I forward end of the file while I read one by one char character
         switch(ch){
        	case'{':
        		push(st,ch); break;
        	case'[':
        		push(st,ch); break;
        	case'(':
        		push(st,ch); break;
        	case'}':
        		if(st->top>=0&&st->characters[st->top]=='{')
        			pop(st); 
				else{
					printf("ERROR:%c Please Fix it\n",ch);
				}
				break;
        	case']':
        		if(st->top>=0&&st->characters[st->top]=='[')
        			pop(st); 
				else{
					printf("ERROR:%c Please Fix it\n",ch);
				}
        	case')':
        		if(st->top>=0&&st->characters[st->top]=='(')
        			pop(st); 
				else{
					printf("ERROR:%c Please Fix it\n",ch);
				}
				default: break;
		}
    }
	free(st);//free memory 
    fclose(f);//file closing
	return 0;
}
void initialize(str *st){
	st->top=-1;
}
void push(str *st,char ch){
	if(st->top==STACK_SIZE-1)
		printf("STACK IS FULL\n");
	else{
		st->characters[++st->top]=ch;
	}
}
void pop(str *st){
	if(st->top==-1){
		printf("STACK IS EMPTY\n");
		return;
	}
	else
		st->top--;	
}
