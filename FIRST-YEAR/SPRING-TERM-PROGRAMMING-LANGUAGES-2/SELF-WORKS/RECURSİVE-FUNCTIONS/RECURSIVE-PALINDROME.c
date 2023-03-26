#include<stdio.h>
long RecFindPalindrome(int num){
	static long num2=0;
	if(num==0)
		return num2 ;
	else{
		num2=(num2*10+(num%10)); return RecFindPalindrome(num/10);
	}
}
int main(){
	long num,result;
	printf("*** TO SEE THE GIVEN NUMBER PALINDROME OR NOT PLEASE ENTER A NUMBER ***\n");
	scanf("%ld",&num);
	if(result=RecFindPalindrome(num)==num)
		printf("%ld IS PALINDROME",num);
	else
		printf("%ld IS NOT PALINDROME",num);
	return 0;
}	
