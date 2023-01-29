#include<stdio.h>

int main(){
    int arraysize,i,j,l,n;
    printf("HOW MUCH WORD WILL YOU ENTER:");
    scanf("%d",&arraysize);
    char control1[arraysize][100];
    
    for(i=0;i<arraysize;i++)
    {
        printf("%d.WORD:",i+1);
        scanf("%s",control1[i]);
        
    }
n=0;
    for(j=0;j<arraysize;j++)
    {
        n=0;
        for(n=0;control1[j][n]!='\0';n++)
        {
            if(control1[j][n]>96&&control1[j][n]<123)
            {
            control1[j][n]=control1[j][n]-32;
            }
            else if(control1[j][n]>64&&control1[j][n]<91)
            {
                control1[j][n]=control1[j][n]+32;
            }
        }
    }
  
    for(l=0;l<arraysize;l++)
    {
		puts(control1[l]);
    }
    
	return 0;
    
}
        
		
		
           
		
        
