#include<stdio.h>
#include<stdlib.h>
int main(){
	int *p,element,*p2,i;
	printf("PLEASE ENTER ELEMENT NUMBER:");
	scanf("%d",&element);
	p=(int*)calloc(element,sizeof(int));
	p2=(int*)malloc(sizeof(int));
	p2=p;
	for(i=0;i<element;i++){
		printf("%d.ELEMENT:",i+1);
		scanf("%d",p+i);
	}
	for(i=1;i<element;i++){
		if(*p2<*(p+i))
			*p2=*(p+i);
}
	printf("BIGGEST ELEMENT:%d",*p2);
	free(p);
	return 0;
}
