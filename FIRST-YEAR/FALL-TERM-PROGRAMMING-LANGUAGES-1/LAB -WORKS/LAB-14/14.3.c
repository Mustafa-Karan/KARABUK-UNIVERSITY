#include<stdio.h>
void vovelFinder(char[]);
int main(){
	char word[100];
	int i;
	printf("PLEASE ENTER A WORD TO FIND VOVELS IN IT:");
	scanf("%s",&word);
	vovelFinder(word);
	return 0;
}
void vovelFinder(char word[]){
	char vovels[11]="AEIOUaeiou";
	int i,j,vovel=0;
	for(i=0;i<10;i++){
		j=0;
		for(;word[j]!='0';j++){
			if(vovels[i]==word[j])
			vovel++;
		}
	}
	printf("VOVELS IN THE WORD:%d",vovel);
}
