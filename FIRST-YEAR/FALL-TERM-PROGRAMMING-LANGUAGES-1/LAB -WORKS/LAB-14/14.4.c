#include<stdio.h>
void a(int[],int,int);
int main(){
	int array[11]={0,1,2,3,5,6,7,8,9},i=10,j,k;
		printf("ENTER A NUMBER:");
		scanf("%d",&k);
		printf("BEFORE THE FUNCTION\n");
		for(j=0;j<9;j++)
			printf("%d",array[j]);
		printf("\n");
		a(array,i,k);
		printf("AFTER THE FUNCTION\n");
		j=0;
		for(;j<i;j++)
			printf("%d",array[j]);
	return 0;
}
void a(int array[],int i,int k){
	int j=0,reminder=0;
	for(;j<i;j++,reminder++){
		if(k>=array[j]&&k<=array[j+1]){
			for(i;i>j;i--)
				array[i]=array[i-1];
		}
	}
	array[reminder]=k;
}
