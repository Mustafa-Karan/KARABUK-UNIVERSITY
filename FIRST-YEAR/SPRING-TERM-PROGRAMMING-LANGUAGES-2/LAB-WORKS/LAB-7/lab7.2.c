#include<stdio.h>
#include<string.h>

int main(){
	char sentence[1000],word[100];
	int len,i=0,j=0,k,backup;
	printf("ENTER A SENTENCE:");
	gets(sentence);
	printf("ENTER A WORD TO SEARCH IN SENTENCE:");
	scanf("%s",word);
	len=strlen(word);
	while(sentence[i]){
		if(sentence[i]==word[j]){
			backup=i;
			k=0;
			for(k;k<len;k++){
				if(sentence[i]==word[k])
					i++;
				else
					break;
			}
			if(k==len)
				printf("WORD FOUND ITS INDEX IS:%d\n",backup);
		}
		i++;
	}
	return 0;
}
