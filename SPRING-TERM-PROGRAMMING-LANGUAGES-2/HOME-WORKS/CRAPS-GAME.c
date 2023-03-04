#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));
	int die1,die2,sum1=0,sum2=0,choice;
	printf("TO PLAY ENTER 1 TO EXIT ENTER 0\n");
	scanf("%d",&choice);
	while(1){
		switch(choice){
			case 1:
				die1=rand()%6+1;
				die2=rand()%6+1;
				sum1=die1+die2;
					
				if(sum1==7||sum1==11){
					printf("YOU WON :))\n");
					break;
				}
				else if(sum1==2||sum1==3||sum1==12){
					printf("YOU LOST :((\n");
					break;
				}
				else{
					while(1){
						printf("TRY AGAIN ENTER 1 TO EXIT ENTER 0\n");
						scanf("%d",&choice);
							if(choice==1){
									die1=rand()%6+1;
									die2=rand()%6+1;
									sum2=die1+die2;
									if(sum2==sum1)
										printf("YOU WON :))\n");
									else if(sum2==7){
										printf("YOU LOST :((\n");
										break;
									}
									sum2=0;
										
								}
							else if(choice==0){
								printf("EXITING...");
								break;
							}
				        	else
				            	 printf("WRONG CHOICE\n");
					            
			        }
			        break;
				}
			case 0:
				printf("EXITING...");
			break;
			default:
			    printf("WRONG CHOICE\n");
			break;
			
		}
	}
	return 0;
}
