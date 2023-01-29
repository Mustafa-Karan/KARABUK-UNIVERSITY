#include<stdio.h>

int main(){
	int x=0,y=0,i,j,l,z=0;
	char first[100];
	char second[100];
	printf("ENTER FIRST STRING:");
	gets(first);
	printf("ENTER SECOND STRING:");
	gets(second);
	for(i=0;first[i]!='\0';i++)
		x++;
		
	printf("first basamak %d",x);
	//char result[x]
	for(j=0;second[j]!='\0';j++)
		z++;
		
	printf("\nsecond basamak %d",x);
	//x=x+1;
	l=x+z;
	char final[l];
	for(i=0;i<x;i++)
	{
		final[i]=first[i];
		
	}
	j = i;
	int k=0;
	puts("");
	for(j;j<z+x;j++)
	{
		final[j]=second[k];
		k++;
		
	}
	for(y=0;y<l;y++)
	{
	printf("%c",final[y]);
		
	}
	
	return 0;
}
