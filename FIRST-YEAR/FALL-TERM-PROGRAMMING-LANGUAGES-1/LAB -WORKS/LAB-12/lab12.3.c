#include<stdio.h>

int main(){
	 char string[100];
	 int control[100],vovel=0,consonant=0,digit=0,space=0,i,j;
	 printf("PLEASE ENTER SOMETHING TO COUNT VOVELS,CONSONANTS ETC,:");
	 gets(string);
	 for(i=0;string[i]!='\0';i++)
	 {
	 	control[i]=string[i];
	 }
	 for(j=0;j<=i;j++)
	 {
	 	if(control[j]==32)
	 	space++;
	 	if(control[j]>47&&control[j]<58)
	 	digit++;
	 	
		 if(control[j]==65||control[j]==69||control[j]==73||control[j]==79||control[j]==85)
		 {
		 	vovel++;
		 }
	 	if(control[j]==97||control[j]==101||control[j]==105||control[j]==111||control[j]==117)
		 {
		 	vovel++;
		 }
		 if((control[j]>64&&control[j]<91)||(control[j]>96&&control[j]<123))
		 consonant++;
	 }
	consonant=consonant-vovel;
	printf("VOVEL=%d\n",vovel);
	printf("CONSONANT=%d\n",consonant);
	printf("DIGIT=%d\n",digit);
	printf("SPACE=%d",space);
	return 0;
}
