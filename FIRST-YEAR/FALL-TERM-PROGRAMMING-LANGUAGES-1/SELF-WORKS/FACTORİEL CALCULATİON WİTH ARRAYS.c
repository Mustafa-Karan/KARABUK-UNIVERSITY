#include<stdio.h>

int main(){
	
	int fac,i;
	int facnum[]={1,2,3,4,5,6,7,8};
	fac=1;
	
	for(i=0;i<9;i++)
	{
		fac=fac*facnum[i];
	}
	printf("FACTORIEL:%d",fac);
	

   /*int numbers[] = {1,5,23,7,5,12,3};
    int i,j,fac;
    fac=1;
    for(i=0;i<7;i++)
    {
        fac=1;
        for(j=numbers[i];j>0;j--)
        {
            fac=fac*j;
        }
        printf("%d\n",fac);
    }
*/

/*int main(){

    int numbers[1];
    int i,j,fac;
    printf("PLEASE ENTER A NUMBER TO CALCULATE FACTORIEL:");
    scanf("%d",&numbers);
	
	
    if(numbers==-1)
	{
		
		printf("THE PROGRAM WAS STOPPED");
	}	
    
	else
    {
		fac=1;
		for(j=numbers[i];j>0;j--)
		{
		    fac=fac*j;
		}
		    printf("%d\n",fac);
    
	}
	*/
	
	return 0;
}
	






	
	
	
	
	
	
	
