#include<stdio.h>

int main(){
	int i,k;
    char j[1];
	while(1){
	printf("IF YOU ENTER 0 YOU WILL SEE DECIMAL TO ASCII EQUIVALENT\n");
	printf("IF YOU ENTER 1 YOU WILL SEE ASCII TABLE PRESSING ENTER BUTTON\n");
	printf("IF YOU ENTER 2 YOU WILL SEE LETTER'S EQUIVALENT IN DECIMAL\n");
	printf("IF YOU ENTER -1 THE PROGRAM WILL END\n");
	scanf("%d",&k);
	if(k==-1)
	break;
	switch(k){
		case 0:
		printf("TO SEE ENTERED DECIMAL NUMBER'S EQUIVALENT OF THE ASCII TABLE\n");
		printf("PLEASE ENTER (0 TO 256) A DECIMAL NUMBER (TO STOP ENTER -1)\n");
		while(1){
			scanf("%d",&i);
			if(i<=-1||i>257){
			if(i==-1)
			break;
			printf("WRONG ENTERING");
			}
			printf("%c\n",i);
		}
		break;
		case 1:
			printf("PRES ENTER BUTTON TO SEE ASCII TABLE'S ELEMENTS (TO STOP ENTER -1)\n");
			for(i=0;i<=256;i++){
			scanf("%c",j);
			if(45==j[0])
		break;
			if(10==j[0])
			printf("%c",i);
			}
		break;
		case 2:
			printf("TO SEE ENTERED LETTER'S EQUIVALENT IN DECIMAL(TO STOP ENTER -1)\n");
			printf("PLEASE ENTER A LETTER\n");
			for(i=0;j[0]!=45;i++){
			scanf("%s",j);
			if(j[0]==45)
			break;
			printf("%d\n",j[0]);
			}
		break;
		default:
			printf("WRONG ENTERING\n");
		break;	
	}
}
	return 0;
}
