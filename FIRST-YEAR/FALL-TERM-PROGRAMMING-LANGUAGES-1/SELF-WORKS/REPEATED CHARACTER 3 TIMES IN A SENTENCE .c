#include<stdio.h>

int main(){
	int i;
	char control[1000];
	printf("ENTER A SENTENCE:");
	gets(control);
	for(i=0;control[i]!='\0';i++)
	{
		if((control[i]==32)&&(control[i]==control[i+1])&&(control[i]==control[i+2]))
		{
			printf("SPACE CHARACTER IS REPEATED 3 TIMES IN A ROW\n");
			i+=3;
		}
		
		if((control[i]==control[i+1])&&(control[i]==control[i+2]))
		{
			printf("%c THIS CHARACTER IS REPEATED 3 TIMES IN A ROW\n",control[i]);
			i+=3;
		}
	}
	
	
	return 0;
}
