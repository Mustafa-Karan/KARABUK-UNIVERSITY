#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int A,B,temp,c;
	printf("ENTER 2 NUMBER TO SWAP THEIR INPUT ORDER\n\n");
	printf("FIRST NUMBER:");
	scanf("%d",&A);
	printf("\nSECOND NUMBER:");
	scanf("%d",&B);
	temp=A;
	A=B;
	B=temp;
	printf("\nSWAPPED NUMBERS\n   %d   %d",A,B);
	return 0;
}
