#include<stdio.h>

int main(){
	char string1[100],string2[100];
	int asciinum[100],i,j,k;
	printf("PLEASE ENTER SOMETHING:");
	gets(string1);
	for(i=0;string1[i]!='\0';i++)
	{
		asciinum[i]=string1[i];

	}
	k=0;
	for(j=0;j<i;j++)
	{
		if((asciinum[j]>64&&asciinum[j]<91)||(asciinum[j]>96&&asciinum[j]<123))
		{
		string2[k]=asciinum[j];
		k++;
		}
	

	}
	string2[k]='\0';	
	
	printf("%s",string2);

	//puts(string2); if you want you can use instead of printf.


	return 0;
}

