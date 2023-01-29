#include<stdio.h>

int main(){
	
	//n=num1-1; for(n;n>=0;n--)==> for(n=num1;n>0;n--) should be.
	
	int sidebyside,sidebysidenum,num1,num2,i,j,k,n;
	
	printf("PLEASE ENTER NUMBER OF LINE:");
	scanf("%d",&num1);
	printf("HOW MANY STARS DO YOU WANT PLEASE ENTER:");
	scanf("%d",&num2);
	printf("HOW MANY TRIANGLE WILL BE WRITTEN SIDE BY SIDE(MAX 10):");
	scanf("%d",&sidebyside);
	
	n=num1-1;
				
	switch(sidebyside){
	case 1:
			for(n;n>=0;n--)
	        {		
				for(i=1;i<=num2;i++)
				{
					for(i=1;i<=num2;i++)
					{
						for(j=i;j>0;j--)
						{
						    printf("*");
						}
						    printf("\n");
					}
				}
							
			}
	break;
	
	case 2:
					         	
		    for(n;n>=0;n--)
	        {		 
				for(i=1;i<=num2;i++)
				{
					for(j=i;j>0;j--)
					{
						printf("*");
					}
					
					sidebysidenum=num2-1-i;
					for(sidebysidenum;sidebysidenum>=0;sidebysidenum--)
					{
						printf(" ");
					}
					for(k=i;k>0;k--)
				    {
						printf("*");
					}
					printf("\n");
				}
								
			}
					         					         
    break;
			
	case 3:
				         	
	        for(n;n>=0;n--)
	        {			 
				for(i=1;i<=num2;i++)
				{
					for(j=i;j>0;j--)
					{
						printf("*");
					}
					
					sidebysidenum=num2-1-i;
					for(sidebysidenum;sidebysidenum>=0;sidebysidenum--)
					{
						printf(" ");
					}
					for(k=i;k>0;k--)
					{
						printf("*");
					}
							
					sidebysidenum=num2-1-i;
					for(sidebysidenum;sidebysidenum>=0;sidebysidenum--)
					{
						printf(" ");
				    }
					for(k=i;k>0;k--)
					{
					    printf("*");
					}
						printf("\n");
									
					}
	         
	        }
	
	break;     
							
	case 4:	
	       
		   for(n;n>=0;n--)
	        {			 
				for(i=1;i<=num2;i++)
				{
					for(j=i;j>0;j--)
					{
						printf("*");
					}
					
					sidebysidenum=num2-1-i;
					for(sidebysidenum;sidebysidenum>=0;sidebysidenum--)
					{
						printf(" ");
					}
					for(k=i;k>0;k--)
					{
						printf("*");
					}
							
					sidebysidenum=num2-1-i;
					for(sidebysidenum;sidebysidenum>=0;sidebysidenum--)
					{
						printf(" ");
				    }
					for(k=i;k>0;k--)
					{
					    printf("*");
					}
					
					sidebysidenum=num2-1-i;
					for(sidebysidenum;sidebysidenum>=0;sidebysidenum--)
					{
						printf(" ");
				    }
					for(k=i;k>0;k--)
					{
					    printf("*");
					}
						printf("\n");
									
					}
	         
	        }
	
	break;     						
								
	case 5:
	       
	       for(n;n>=0;n--)
	        {			 
				for(i=1;i<=num2;i++)
				{
					for(j=i;j>0;j--)
					{
						printf("*");
					}
					
					sidebysidenum=num2-1-i;
					for(sidebysidenum;sidebysidenum>=0;sidebysidenum--)
					{
						printf(" ");
					}
					for(k=i;k>0;k--)
					{
						printf("*");
					}
							
					sidebysidenum=num2-1-i;
					for(sidebysidenum;sidebysidenum>=0;sidebysidenum--)
					{
						printf(" ");
				    }
					for(k=i;k>0;k--)
					{
					    printf("*");
					}
					
					sidebysidenum=num2-1-i;
					for(sidebysidenum;sidebysidenum>=0;sidebysidenum--)
					{
						printf(" ");
				    }
					for(k=i;k>0;k--)
					{
					    printf("*");
					}
						
					sidebysidenum=num2-1-i;
					for(sidebysidenum;sidebysidenum>=0;sidebysidenum--)
					{
						printf(" ");
				    }
					for(k=i;k>0;k--)
					{
					    printf("*");
					}	
						printf("\n");
									
					}
	         
	        }
	
	break;     						
		    						
	case 6:	
	
	       for(n;n>=0;n--)
	        {			 
				for(i=1;i<=num2;i++)
				{
					for(j=i;j>0;j--)
					{
						printf("*");
					}
					
					sidebysidenum=num2-1-i;
					for(sidebysidenum;sidebysidenum>=0;sidebysidenum--)
					{
						printf(" ");
					}
					for(k=i;k>0;k--)
					{
						printf("*");
					}
							
					sidebysidenum=num2-1-i;
					for(sidebysidenum;sidebysidenum>=0;sidebysidenum--)
					{
						printf(" ");
				    }
					for(k=i;k>0;k--)
					{
					    printf("*");
					}
					
					sidebysidenum=num2-1-i;
					for(sidebysidenum;sidebysidenum>=0;sidebysidenum--)
					{
						printf(" ");
				    }
					for(k=i;k>0;k--)
					{
					    printf("*");
					}
						
					sidebysidenum=num2-1-i;
					for(sidebysidenum;sidebysidenum>=0;sidebysidenum--)
					{
						printf(" ");
				    }
					for(k=i;k>0;k--)
					{
					    printf("*");
					}
					
					sidebysidenum=num2-1-i;
					for(sidebysidenum;sidebysidenum>=0;sidebysidenum--)
					{
						printf(" ");
				    }
					for(k=i;k>0;k--)
					{
					    printf("*");
					}		
						printf("\n");
									
					}
	         
	        }
	
	break;     												

    case 7:
    	   
    	   for(n;n>=0;n--)
	        {			 
				for(i=1;i<=num2;i++)
				{
					for(j=i;j>0;j--)
					{
						printf("*");
					}
					
					sidebysidenum=num2-1-i;
					for(sidebysidenum;sidebysidenum>=0;sidebysidenum--)
					{
						printf(" ");
					}
					for(k=i;k>0;k--)
					{
						printf("*");
					}
							
					sidebysidenum=num2-1-i;
					for(sidebysidenum;sidebysidenum>=0;sidebysidenum--)
					{
						printf(" ");
				    }
					for(k=i;k>0;k--)
					{
					    printf("*");
					}
					
					sidebysidenum=num2-1-i;
					for(sidebysidenum;sidebysidenum>=0;sidebysidenum--)
					{
						printf(" ");
				    }
					for(k=i;k>0;k--)
					{
					    printf("*");
					}
						
					sidebysidenum=num2-1-i;
					for(sidebysidenum;sidebysidenum>=0;sidebysidenum--)
					{
						printf(" ");
				    }
					for(k=i;k>0;k--)
					{
					    printf("*");
					}
					
					sidebysidenum=num2-1-i;
					for(sidebysidenum;sidebysidenum>=0;sidebysidenum--)
					{
						printf(" ");
				    }
					for(k=i;k>0;k--)
					{
					    printf("*");
					}	
					
					sidebysidenum=num2-1-i;
					for(sidebysidenum;sidebysidenum>=0;sidebysidenum--)
					{
						printf(" ");
				    }
					for(k=i;k>0;k--)
					{
					    printf("*");
					}			
						printf("\n");
									
					}
	         
	        }
	
	break;     												
    	
    case 8:
	
	 	   for(n;n>=0;n--)
	        {			 
				for(i=1;i<=num2;i++)
				{
					for(j=i;j>0;j--)
					{
						printf("*");
					}
					
					sidebysidenum=num2-1-i;
					for(sidebysidenum;sidebysidenum>=0;sidebysidenum--)
					{
						printf(" ");
					}
					for(k=i;k>0;k--)
					{
						printf("*");
					}
							
					sidebysidenum=num2-1-i;
					for(sidebysidenum;sidebysidenum>=0;sidebysidenum--)
					{
						printf(" ");
				    }
					for(k=i;k>0;k--)
					{
					    printf("*");
					}
					
					sidebysidenum=num2-1-i;
					for(sidebysidenum;sidebysidenum>=0;sidebysidenum--)
					{
						printf(" ");
				    }
					for(k=i;k>0;k--)
					{
					    printf("*");
					}
						
					sidebysidenum=num2-1-i;
					for(sidebysidenum;sidebysidenum>=0;sidebysidenum--)
					{
						printf(" ");
				    }
					for(k=i;k>0;k--)
					{
					    printf("*");
					}
					
					sidebysidenum=num2-1-i;
					for(sidebysidenum;sidebysidenum>=0;sidebysidenum--)
					{
						printf(" ");
				    }
					for(k=i;k>0;k--)
					{
					    printf("*");
					}	
					
					sidebysidenum=num2-1-i;
					for(sidebysidenum;sidebysidenum>=0;sidebysidenum--)
					{
						printf(" ");
				    }
					for(k=i;k>0;k--)
					{
					    printf("*");
					}
					
					sidebysidenum=num2-1-i;
					for(sidebysidenum;sidebysidenum>=0;sidebysidenum--)
					{
						printf(" ");
				    }
					for(k=i;k>0;k--)
					{
					    printf("*");
					}						
						printf("\n");
									
					}
	         
	        }
	
	break;     												
    	
    case 9:	
    	   
    	   for(n;n>=0;n--)
	        {			 
				for(i=1;i<=num2;i++)
				{
					for(j=i;j>0;j--)
					{
						printf("*");
					}
					
					sidebysidenum=num2-1-i;
					for(sidebysidenum;sidebysidenum>=0;sidebysidenum--)
					{
						printf(" ");
					}
					for(k=i;k>0;k--)
					{
						printf("*");
					}
							
					sidebysidenum=num2-1-i;
					for(sidebysidenum;sidebysidenum>=0;sidebysidenum--)
					{
						printf(" ");
				    }
					for(k=i;k>0;k--)
					{
					    printf("*");
					}
					
					sidebysidenum=num2-1-i;
					for(sidebysidenum;sidebysidenum>=0;sidebysidenum--)
					{
						printf(" ");
				    }
					for(k=i;k>0;k--)
					{
					    printf("*");
					}
						
					sidebysidenum=num2-1-i;
					for(sidebysidenum;sidebysidenum>=0;sidebysidenum--)
					{
						printf(" ");
				    }
					for(k=i;k>0;k--)
					{
					    printf("*");
					}
					
					sidebysidenum=num2-1-i;
					for(sidebysidenum;sidebysidenum>=0;sidebysidenum--)
					{
						printf(" ");
				    }
					for(k=i;k>0;k--)
					{
					    printf("*");
					}	
					
					sidebysidenum=num2-1-i;
					for(sidebysidenum;sidebysidenum>=0;sidebysidenum--)
					{
						printf(" ");
				    }
					for(k=i;k>0;k--)
					{
					    printf("*");
					}
					
					sidebysidenum=num2-1-i;
					for(sidebysidenum;sidebysidenum>=0;sidebysidenum--)
					{
						printf(" ");
				    }
					for(k=i;k>0;k--)
					{
					    printf("*");
					}	
					
					sidebysidenum=num2-1-i;
					for(sidebysidenum;sidebysidenum>=0;sidebysidenum--)
					{
						printf(" ");
				    }
					for(k=i;k>0;k--)
					{
					    printf("*");
					}											
						printf("\n");
									
					}
	         
	        }
	
	break;     												
    	
	case 10:     
		    
		    for(n;n>=0;n--)
	        {			 
				for(i=1;i<=num2;i++)
				{
					for(j=i;j>0;j--)
					{
						printf("*");
					}
					
					sidebysidenum=num2-1-i;
					for(sidebysidenum;sidebysidenum>=0;sidebysidenum--)
					{
						printf(" ");
					}
					for(k=i;k>0;k--)
					{
						printf("*");
					}
							
					sidebysidenum=num2-1-i;
					for(sidebysidenum;sidebysidenum>=0;sidebysidenum--)
					{
						printf(" ");
				    }
					for(k=i;k>0;k--)
					{
					    printf("*");
					}
					
					sidebysidenum=num2-1-i;
					for(sidebysidenum;sidebysidenum>=0;sidebysidenum--)
					{
						printf(" ");
				    }
					for(k=i;k>0;k--)
					{
					    printf("*");
					}
						
					sidebysidenum=num2-1-i;
					for(sidebysidenum;sidebysidenum>=0;sidebysidenum--)
					{
						printf(" ");
				    }
					for(k=i;k>0;k--)
					{
					    printf("*");
					}
					
					sidebysidenum=num2-1-i;
					for(sidebysidenum;sidebysidenum>=0;sidebysidenum--)
					{
						printf(" ");
				    }
					for(k=i;k>0;k--)
					{
					    printf("*");
					}	
					
					sidebysidenum=num2-1-i;
					for(sidebysidenum;sidebysidenum>=0;sidebysidenum--)
					{
						printf(" ");
				    }
					for(k=i;k>0;k--)
					{
					    printf("*");
					}
					
					sidebysidenum=num2-1-i;
					for(sidebysidenum;sidebysidenum>=0;sidebysidenum--)
					{
						printf(" ");
				    }
					for(k=i;k>0;k--)
					{
					    printf("*");
					}	
					
					sidebysidenum=num2-1-i;
					for(sidebysidenum;sidebysidenum>=0;sidebysidenum--)
					{
						printf(" ");
				    }
					for(k=i;k>0;k--)
					{
					    printf("*");
					}	
					
					sidebysidenum=num2-1-i;
					for(sidebysidenum;sidebysidenum>=0;sidebysidenum--)
					{
						printf(" ");
				    }
					for(k=i;k>0;k--)
					{
					    printf("*");
					}																					
						printf("\n");
									
					}
	         
	        }
	
	break;     									
		 
	default: printf("WRONG ENTERING");
	break;
	     
}
	         
	
	return 0;
}
			
		
	
	
	
	
	
	
	
	
