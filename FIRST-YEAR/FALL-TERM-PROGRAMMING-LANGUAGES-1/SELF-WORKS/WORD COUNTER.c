#include<stdio.h>

int main(){
	int words=0,i=0,j=0;
	char sentence[1000];
	
	printf("PLEASE ENTER A SENTENCE TO COUNT WORDS IN IT:");
	gets(sentence);
	
	if(sentence[i]!=32)
	i++;
	
	else if(sentence[i]==32)
	{
		for(i;sentence[i]==32;i++){
			j++;
		}
	}
		
	for(i;sentence[i]!='\0';i++){
		
		if(sentence[i]==32){
			for(i;sentence[i]==32;i++){
				j++;
			}
			if(sentence[i+1]!=32)
	         words++;
		}
	}
	
	printf("%d SPACE\n",j);
	printf("%d WORD IN THIS SENTENCE",words);
	
	return 0;
}
		
	

	
				
			
			
			
		
