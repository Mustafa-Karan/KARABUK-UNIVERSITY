#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num,first,last,counter,backupnum,newnum;
	
	printf("TO SWAP FIRST AND LAST DIGIT ENTER A NUMBER:");
	scanf("%d",&num);
	
	
    last=num%10;
	backupnum=num;
	counter=1;

while(num>0)
	{
		first=num%10;
		num=num/10;
		counter=counter*10;
		
		if(num>0&&num<10)
		{
	      first=num;
		  backupnum=backupnum-(counter*first);
		}
	
	}
		  
	      counter=counter/10;
	      newnum=(last*counter)+backupnum-last+first;
	      printf("\nSWAPPED NUMBER IS:%d",newnum);
		  
			
		  
	
	return 0;
}
