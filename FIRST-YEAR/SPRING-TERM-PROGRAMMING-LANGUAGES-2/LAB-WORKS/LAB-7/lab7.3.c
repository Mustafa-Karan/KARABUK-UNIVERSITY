#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	char *sentence=(char*)malloc(sizeof(char));
	int i=0,j=64,k=96,l;
	printf("ENTER A SENTENCE:");
	while(1){
		*(sentence+i)=getch();
		if(*(sentence+i)==13)
			break;
		putchar(*(sentence+i));
		i++;
		sentence=realloc(sentence,(i+1)*sizeof(char));
	}
	
	sentence=realloc(sentence,(i+1)*sizeof(char));
	*(sentence+i)='\0';
	
	while(j!=91){
		i=0;
		l=0;
		while(*(sentence+i)!='\0'){
			if(*(sentence+i)==j)
				l++;
			i++;
		}
		if(l!=0)
			printf("\n%c REPEATED %d TIMES",j,l);
		j++;
	}
	
	while(k!=123){
		i=0;
		l=0;
		while(*(sentence+i)!='\0'){
			if(*(sentence+i)==k)
				l++;
			i++;
		}
		if(l!=0)
			printf("\n%c REPEATED %d TIMES",k,l);
		k++;
	}

	free(sentence);
	
	return 0;
}
