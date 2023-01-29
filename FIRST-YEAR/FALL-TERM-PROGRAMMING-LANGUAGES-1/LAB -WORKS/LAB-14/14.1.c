#include<stdio.h>
# define SIZE 10
	
void max(int []);
int main(){
	int array[SIZE],i;
	printf("ENTER NUMBERS TO FIND MAX AND SECOND MAX\n");
	for(i=0;i<SIZE;i++)
	scanf("%d",&array[i]);
	max(array);
	return 0;
}
void max(int array[]){
	int i,max=0,max2=0,temp=0;
	for(i=0;i<SIZE;i++){
		if(max<=array[i]){
			max=array[i];
			if(max2<temp)
			max2=temp;
		}
		temp=max;
	}
	printf("1.MAX:%d\n2.MAX:%d",max,max2);
}
