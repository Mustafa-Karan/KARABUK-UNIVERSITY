#include <stdio.h>
 
int main() {
 //HCF==>HÝGHEST COMMON FACTOR,LCM==>LEAST COMMON MULTÝPLE
    int num1,num2,minnum,i,result,prime,HCF=1;
   
    printf("PLEASE ENTER FIRST NUMBER:");
    scanf("%d",&num1);
    printf("PLEASE ENTER SECOND NUMBER:");
    scanf("%d",&num2);
 
    if (num1<num2)
        minnum=num1;
    else
        minnum=num2;
    
	for (i=2;i<=minnum;i++)
	{
        if (num1%i==0&&num2%i==0)
            HCF=i;
    }
    result=(num1*num2)/HCF;
    prime=num1*num2;
    
	if(prime==result)
    printf("THESE NUMBERS ARE PRIME\nLCM=%d*%d\n",num1,num2);
    
    if(prime!=result)
	{
	printf("HCF(%d,%d)=%d\n",num1,num2,HCF);
	printf("LCM(%d,%d)=%d",num1,num2,result);
	}
		
    
	return 0;
}
    
 
   
 
 
 
