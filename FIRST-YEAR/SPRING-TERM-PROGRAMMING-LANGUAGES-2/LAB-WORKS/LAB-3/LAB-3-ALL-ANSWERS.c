/*ANSWER 1:
	OUTPUT IS:	8	5	19
				6	5	13
				4	5	9	
				2	5	7
				0	5	7 */
//ANSWER 2:
#include<stdio.h>
int Odd(int a[],int i){
	if(i==0)
		return 0;
	else{
		if(a[i-1]%2==0)
			return(1+Odd(a,i-1));
		else
			return(Odd(a,i-1));
	}	
}
int main(){
	
	int A[]={1,2,3,4,5,6,7,8,9,10},i=10;
	printf("%d ODD NUMBER",Odd(A,i));
	
	return 0;
}
//ANSWER 3: 16
//ANSWER 4: 21
//ANSWER 5: C
//ANSWER 6: OUTPUT IS:7 6 5 4 3 2 1
//ANSWER 7: THIS FINDS NUMBER'S BINARY FORM ==> 11001
//ANSWER 8: E
//ANSWER 9: E BECAUSE FIRST B GOES FUNCTION WITHOUT DIMINISHING THEN B IS DIMINISHED FOR THIS REASON
//WE WILL SEE ON OUR SCREEN LIMITLESS a.
