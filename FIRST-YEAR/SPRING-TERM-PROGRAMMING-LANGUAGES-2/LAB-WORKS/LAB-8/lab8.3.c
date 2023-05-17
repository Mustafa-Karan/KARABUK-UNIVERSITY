//Write C program to store information of students using structure. (In this example, you should store the 
//information of 5 students by using an array of structures.)
#include<stdio.h>
 struct info{
 	int no;
 	char name[50];
 	char surname[50];
 	int grade;
 }students[5];
void showinfo(struct info *,int);
void main(){
	int i=0,n;
	struct info *ptr=students;
	printf("HOW MANY STUDENTS WILL ENTERED MAX 5:");
	scanf("%d",&n);
	for(i;i<n;i++){
		printf("%d. STUDENT'S NO:",i+1);
		scanf("%d",&(ptr+i)->no);
		printf("%d. STUDENT'S NAME:",i+1);
		scanf("%s",(ptr+i)->name);
		printf("%d. STUDENT'S SURNAME:",i+1);
		scanf("%s",(ptr+i)->surname);
		printf("%d. STUDENT'S GRADE:",i+1);
		scanf("%d",&(ptr+i)->grade);
	}
	showinfo(ptr,n);
}
void showinfo(struct info *p,int n){
	int i=0;
	for(i;i<n;i++){
		printf("\n");
		printf("%d. STUDENT'S NO:%d\n",i+1,(p+i)->no);
		printf("%d. STUDENT'S NAME:%s\n",i+1,(p+i)->name);
		printf("%d. STUDENT'S SURNAME:%s\n",i+1,(p+i)->surname);
		printf("%d. STUDENT'S GRADE:%d\n",i+1,(p+i)->grade);
	}
}
