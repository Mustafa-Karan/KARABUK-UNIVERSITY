#include<stdio.h>
int main(){
	int i;
	char str[100],*ptr;
	ptr=str;
	printf("ENTER A SENTENCE TO FIND LENGTH\n");
	gets(str);
	for(i=0;*(ptr+i)!='\0';i++);
	printf("LENGTH:%d",i);
	return 0;
}
