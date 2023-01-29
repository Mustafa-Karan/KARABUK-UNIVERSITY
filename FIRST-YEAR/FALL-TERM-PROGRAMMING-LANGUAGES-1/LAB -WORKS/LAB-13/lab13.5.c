#include<stdio.h>

void wordcounter(char sentence[]);
void main(){
	char sentence[1000];
	printf("ENTER A SENTENCE:");
	gets(sentence);
	wordcounter(sentence);
}
void wordcounter(char sentence[]){
	int i,counter=0;
	for(i=0;sentence[i]!='\0';i++){
		for(i;(sentence[i]<65&&sentence[i]>90)||(sentence[i]<97&&sentence[i]>122);i++);
		if((sentence[i]>64&&sentence[i]<91)||(sentence[i]>96&&sentence[i]<123)){
			for(i;(sentence[i]>64&&sentence[i]<91)||(sentence[i]>96&&sentence[i]<123);i++);
				counter++;
		}
	}
	printf("%d WORD IN THIS SENTENCE",counter);
}
