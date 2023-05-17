#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){
	char *p1;
	int i=0,j=0;
	p1=(char*)malloc(sizeof(char));
	while(1){
		*(p1+i)=getch();
		if(*(p1+i)==13){
			*(p1+i)='\0';
			break;
		} 
		putchar(*(p1+i));
		p1=(char*)realloc(p1,(i+1)*sizeof(char));
		i++;
	}
	printf("\n");
	while(1){
		if(i==0){
			while(*(p1+i)!=32){
					putchar(*(p1+i));
					i++;
			}
			break;
		}	
		if(*(p1+i)==' '){
			j=i;
			while(1){
				if(*(p1+j+1)==32||*(p1+j+1)=='\0') break;
				putchar(*(p1+j+1));
				j++;
			} 
			putchar(' ');
			j=0;
		}
		i--;
	}
	free(p1);
	return 0;
}
