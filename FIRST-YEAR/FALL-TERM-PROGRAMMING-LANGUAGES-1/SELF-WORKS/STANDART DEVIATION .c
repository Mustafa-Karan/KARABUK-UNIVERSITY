#include<stdio.h>
#include<math.h>
//STANDART DEVIATION PROGRAM
void matrixprint(int a[3][3]);
void standartdeviationline(int a[3][3]);
void standartdeviationcolumn(int a[3][3]);
void main(){
	int a[3][3],i,j;
	printf("ENTER THE 3X3 MATRIX VALUE \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
		scanf("%d",&a[i][j]);
	}
	
	matrixprint(a);	
	standartdeviationline(a);
	standartdeviationcolumn(a);
}
void matrixprint(int a[3][3]){
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			printf("  %4d",a[i][j]);	
	printf("\n\n");
	}
}
void standartdeviationcolumn(int a[3][3]){
	float result[3],sum=0,average=0,final=0;
	int i,j;
	for(i=0;i<3;i++){//this part moves column's elements
		j=0;
		for(;j<3;j++)//this part moves line's elements
			sum=sum+a[j][i];
			average=sum/3;//3 line's element number
		j=0;
		for(;j<3;j++)
		final=final+pow((a[j][i]-average),2);
		final=final/2;//2 line's element number-1
		result[i]=sqrt(final);
		final=0;
		sum=0;
	}	
	i=0;
	for(;i<3;i++){
		printf("%d.COLUMN'S STANDART DEVIATION:%f\n",i+1,result[i]);
	}	
}
void standartdeviationline(int a[3][3]){
	float result[3],sum=0,average=0,final=0;
	int i,j;
	for(j=0;j<3;j++){//this part moves line's elements
		i=0;
		for(;i<3;i++)//this part moves column's elements
			sum=sum+a[j][i];
			average=sum/3;//3 column's element number
		i=0;
		for(;i<3;i++)
		final=final+pow((a[j][i]-average),2);
		final=final/2;//2 column's element number -1
		result[j]=sqrt(final);
		final=0;
		sum=0;
	}	
	i=0;
	for(;i<3;i++){
		printf("%d.LINE'S STANDART DEVIATION:%f\n",i+1,result[i]);
	}	
}		
