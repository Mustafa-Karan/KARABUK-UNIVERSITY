#include<stdio.h>
int main(){
	int arr[5],*ptr,i;
	ptr=arr;
	printf("ENTER ARRAY'S ELEMENTS\n");
	for(i=0;i<5;i++){
		printf("ELEMENT %d:",i+1);
		scanf("%d",&arr[i]);
	}
	printf("ENTERED ELEMENTS");
	for(i=0;i<5;i++){
		printf("\nELEMENT %d:%d",i+1,*(ptr+i));
	}
	return 0;
}
