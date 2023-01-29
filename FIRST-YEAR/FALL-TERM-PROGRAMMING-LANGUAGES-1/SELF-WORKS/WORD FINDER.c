#include<stdio.h>

int main(){
	int i,j,k=0;
	char sentence[1000],word[100];
	printf("PLEASE ENTER A SENTENCE:");
	gets(sentence);
	printf("ENTER A WORD TO SEARCH IT IN THE SENTENCE:");
	scanf("%s",word);
	for(i=0;sentence[i]!='\0';i++){
		if(word[0]==sentence[i]){
		j=0;
		for(j;word[j]==sentence[i];j++,i++){
			if(word[j+1]=='\0'){
				k++;
				break;
			}
		}
	}
}
	printf(" ''%s'' THIS WORD REPEATED %d TIMES IN THE SENTENCE",word,k);
	return 0;
}
