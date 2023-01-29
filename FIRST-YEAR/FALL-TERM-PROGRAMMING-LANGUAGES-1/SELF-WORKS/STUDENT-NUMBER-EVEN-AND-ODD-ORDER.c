#include<stdio.h>

int main(){
	long long arraysize=0,num,backup;
	printf("PLEASE ENTER STUDENT NUMBER TO FIND EVEN AND ODD NUMBERS IN ORDER (MAX 19 DIGIT):");
	scanf("%lld",&num);
	backup=num;
	while(backup>0){
		backup=backup/10;
		arraysize++;
	}
	printf("ENTERED NUMBER HAVE %d DIGIT.\n",arraysize);	
		
	long long final[arraysize],i,j,k,l,mod;
	for(i=num,j=0;i>0;i/=10){
		final[j]=i%10;;
		j++;
	}
		
	for(i=1;i<=9;i+=2){
		j=0;
		for(j;j<arraysize;j++){
			if(final[j]==i)
			printf("ODD:%d\n",final[j]);
			
		}
	}
	for(k=0;k<=8;k+=2){
		l=0;
		for(l;l<arraysize;l++){
			if(final[l]==k)
			printf("EVEN:%d\n",final[l]);
			
		}
	}
	
	
	return 0;
}
