#include<stdio.h>
#include<stdlib.h>
int main(){
	char *p=(char*)malloc(7*sizeof(char));
	int i=0;
	printf("PLEASE ENTER NAME AND SURNAME THEN PRESS THE ENTER BUTTON\n");
	while(1){
		*(p+i)=getch();
		if(*(p+i)==13) break;
		putchar('*');
		if(i>7)
		p=realloc(p,(i+1)*sizeof(char));
		i++;
	}
	printf("\nENTERED\n");
	puts(p);
	free(p);
	return 0;
}
