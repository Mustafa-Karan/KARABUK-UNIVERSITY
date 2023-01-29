#include <stdio.h>

int main() {
 int number,i,j;
 printf("TO PRINT FLOYD'S TRIANGLE ENTER A STOP VALUE:");
 scanf("%d",&number);
 for(i=1;i<=number;i++)
 {
 	for(j=i;j>0;j--)
	 {
	   if(j%2!=0)
	   printf("1");
	   else
	   printf("0");
	 }
	 printf("\n");
 }
 
   
    return 0;
}
