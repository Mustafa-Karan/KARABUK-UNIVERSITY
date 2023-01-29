#include<stdio.h>

int main(){
	char s[1000],temp;
	int x,y;
	printf("ENTER A SENTENCE TO PRINT REVERSE:");
	gets(s);
	for(x=0;s[x]!='\0';x++);
		for(y=0;y<(x/2);y++){
			temp=s[x-y-1];
			s[x-y-1]=s[y];
			s[y]=temp;
		}
	puts(s);
	return 0;
}
