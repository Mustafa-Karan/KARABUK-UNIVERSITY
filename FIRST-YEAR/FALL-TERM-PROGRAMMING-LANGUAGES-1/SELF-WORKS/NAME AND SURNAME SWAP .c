#include<stdio.h>

int main(){
	//THE PROGRAM THAT SWAPS NAME AND SURNAME
	int namecounter,surnamecounter,i,j;
	char name[20],surname[20];
	printf("NAME:");
	scanf("%s",name);
	printf("SURNAME:");
	scanf("%s",surname);
	for(namecounter=0;name[namecounter]!='\0';namecounter++);
	for(surnamecounter=0;surname[surnamecounter]!='\0';surnamecounter++);
	if(namecounter<=surnamecounter){
		namecounter=surnamecounter;
	}
for(i=0,j=0;i<namecounter;i++,j++){
	name[i]=surname[j]+name[i];
	surname[j]=name[i]-surname[j];
	name[i]=name[i]-surname[j];
}
	name[i]='\0';
	surname[j]='\0';
	puts(name);
	puts(surname);
	
	return 0;
}
	
	
