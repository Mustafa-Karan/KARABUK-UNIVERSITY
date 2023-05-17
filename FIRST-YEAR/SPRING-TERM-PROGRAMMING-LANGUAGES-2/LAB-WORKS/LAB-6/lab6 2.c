#include<stdio.h>
#include<stdlib.h>

int main(){
	char *p=(char*)malloc(13*sizeof(char));
	strcpy(p,"MUSTAFA KARAN");
	puts(p);
	return 0;
}
/*int main(){
	char *p=(char*)malloc(8*sizeof(char));
	strcpy(p,"MUSTAFA");
	puts(p);
	p=(char*)realloc(p,5*sizeof(char));
	strcpy(p,"MUSTAFA KARAN");
	puts(p);
	return 0;
}*/
