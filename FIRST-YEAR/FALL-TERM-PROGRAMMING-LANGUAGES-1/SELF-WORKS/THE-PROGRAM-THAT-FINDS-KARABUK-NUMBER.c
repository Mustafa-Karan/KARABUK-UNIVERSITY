#include<stdio.h>

int main(){
	
	int startvalue,stopvalue,mod,tempmod,i;
	
	printf("ENTER START VALUE:");
	scanf("%d",&startvalue);
	printf("ENTER STOP VALUE:");
	scanf("%d",&stopvalue);
	
	for(startvalue;startvalue<=stopvalue;startvalue+=1)
	{
	mod=startvalue%10;
	i=startvalue/10;
	        
		for(i;i>0;i=i/10)
		{
			tempmod=i%10;
				
				if(mod!=tempmod)
				{
                    break;
				}
				if(i>0&&i<10)
				{
		          printf("\nTHIS NUMBER IS ONE OF THE KARABUK NUMBER:%d",startvalue);
				}
										
		}
				
	}
	
	return 0;
}
	
	
	
					
					
					
			   
					
				
					
				
						
					
					
			     
			
	     
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
						
					  	
						
					  
						
					
					
						
						
			            
					
						
							
						
						
						
						
		       			       
			                	
