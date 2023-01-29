#include<stdio.h>
void order(char []);
int main(){
	char sentence[100];
	int i;
	printf("ENTER A SENTENCE:");
	gets(sentence);
	order(sentence);
	printf("%s",sentence);
	return 0;
}
void order(char sentence[]){
	int i,j=0,asci=64;
	char temp;
	for(asci=65;asci<123;asci++){
		i=0;
		if(asci==90)
		asci+=7;
		for(;sentence[i]!='\0';i++){
			if(sentence[i]==asci){
				if(sentence[j]==32)
				j++;
				temp=sentence[j];
				sentence[j]=sentence[i];
				sentence[i]=temp;
				j++;
			}
		}
	}
}
