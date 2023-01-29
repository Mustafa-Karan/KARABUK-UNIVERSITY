#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	//passing grade is 50
	
	int sid;
	float mid,final,a,b,c;
	printf("ENTER STUDENT ID:");
	scanf("%d",&sid);
	
	printf("\nENTER MIDTERM GRADE:");
	scanf("%f",&mid);
	
	printf("\nENTER FINAL GRADE:");
	scanf("%f",&final);
	
	a=(mid*40)/100;
	b=(final*60)/100;
	c=a+b;
	
	if(c>=50)
	{
		
		printf("\n\n****PASSING GRADE****\n\n");
		printf("STUDENT ID:%d",sid);
		printf("\nGRADE:%f",c);
		printf("\nSUCCESFULL");
	}
	else
	{
		printf("****PASSING GRADE****\n\n");
		printf("STUDENT ID:%d",sid);
		printf("\nGRADE:%f",c);
		printf("\nFAILED");
	}
	
	
	return 0;
}
