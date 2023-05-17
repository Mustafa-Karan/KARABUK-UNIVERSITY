#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char *str1=(char*)malloc(sizeof(char));
	char *str2=(char*)malloc(sizeof(char));
	int result,i=0;
	printf("ENTER FIRST WORD:");
	while(1){
		*(str1+i)=getch();
		if(*(str1+i)==13||*(str1+i)==32){
			i++;
			str1=realloc(str1,(i+1)*sizeof(char));
			*(str1+i)='\0';
			break;
		}
		printf("%c",*(str1+i));
		i++;
		str1=realloc(str1,(i+1)*sizeof(char));
	}
	printf("\nENTER SECOND WORD:");
	i=0;
	while(1){
		*(str2+i)=getch();
		if(*(str2+i)==13||*(str2+i)==32){
			i++;
			str2=realloc(str2,(i+1)*sizeof(char));
			*(str2+i)='\0';
			break;
		}
		printf("%c",*(str2+i));
		i++;
		str2=realloc(str2,(i+1)*sizeof(char));
	}
	result=strcmp(str1,str2);
	if(result==0)
		printf("\nSTRINGS ARE SAME");
	else if(result>0)
		printf("\nSTRINGS ARE NOT SAME FIRST ONE IS LONGER");
	else
		printf("\nSTRINGS ARE NOT SAME SECOND ONE IS LONGER");
	
	free(str1);
	free(str2);
	
	return 0;
}
