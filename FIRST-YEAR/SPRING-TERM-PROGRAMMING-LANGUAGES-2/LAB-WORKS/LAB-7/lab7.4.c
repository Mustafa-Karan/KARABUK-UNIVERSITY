#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char *str=(char*)malloc(sizeof(char));
	int words=0,i=0;
	printf("PLEASE ENTER A SENTENCE\n");
	while(1){
		*(str+i)=getch();
		if(*(str+i)==13){
			str=(char*)realloc(str,(i+1)*sizeof(char));
			*(str+i)='\0';
			break;
		}
		putchar(*(str+i));
		i++;
		str=(char*)realloc(str,(i+1)*sizeof(char));
	}
	if(*(str)!=32) words++;
	i=0;
	while(*(str+i)){
		if(*(str+i)==32 && *(str+i+1)!=32) words++; i++;
	}
	printf("\nLENGHT IS:%d\n",strlen(str));
	printf("%d WORSD IN THIS SENTENCE",words);
	
	free(str);
	return 0;
}
