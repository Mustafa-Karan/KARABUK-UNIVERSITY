#include<stdio.h>
int main(){
	char str[100],*ptr;
	int i;
	ptr=str;
	printf("ENTER A SENTENCE:");
	gets(str);
	for(i=0;*(ptr+i)!='\0';i++);
	for(i;i>=0;i--)
		printf("%c",*(ptr+i));
		return 0;
}
