#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,n,*p,choice,add;
	printf("ENTER ELEMENT NUMBER:");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		printf("ENTER %d. ELEMENT:",i+1);
		scanf("%d",&*(p+i));
		if(n==i+1){
			printf("MEMORY IS FULL\nTO ADD NEW ELEMENTS ENTER 1 TO EXIT ENTER 0:");
			scanf("%d",&choice);
			switch(choice){
				case 1:
					printf("HOW MANY ELEMENT WILL ADD:");
					scanf("%d",&add);
					n+=add;
					p=(int*)realloc(p,n*sizeof(int));
				break;
				case 0: printf("EXITING...\n"); break;
				default: printf("WRONG CHOICE EXITING...\n"); break;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d. ELEMENT:%d\n",i+1,*(p+i));
	}
	return 0;
}
