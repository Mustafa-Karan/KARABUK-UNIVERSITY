#include <stdio.h>

int main()
{
   //I made it with using combination,which is n!/(n-r)!*r! c(3,2)==>6/1*2=3.
   //Ýnstead of that formula I use c(3,2)==> 3.2/2.1=6/2=3 for example
   //n makes factorial 3.2.1 ==> 3.2==>3
   //every step has numbers j shows this numbers' number for example step 3 has 3 number 1 2 1 etc.
   //x==> 5.4.3.2.1..... k==>1.2.3.4.....
   int line,voidmaker,forline,forvoid,n,j,factorialx,factorialy,k,x,result;
   printf("PLEASE ENTER THE LINE:");
   scanf("%d",&line);
   line=line-1;
   voidmaker=line;
for(forline=0;forline<=line;forline++)
{
	   for(forvoid=voidmaker;forvoid>=0;forvoid--)
	   {
	   	printf(" ");
	   }
   	n=0;
   for(j=forline;j>=0;j--)
   {
	factorialx=1;
   	factorialy=1;
	   
	   for(k=j;k>=1;k--)
	   {
	   	factorialy=factorialy*k;
	   }
	   for(x=forline;x>n;x--)
	   {
	   	factorialx=factorialx*x;
	   }
	   result=factorialx/factorialy;
	   printf(" %d",result);
	   n++;
   }
	   voidmaker--;
	printf("\n");
	
}
return 0;
}
   
   
   
   
