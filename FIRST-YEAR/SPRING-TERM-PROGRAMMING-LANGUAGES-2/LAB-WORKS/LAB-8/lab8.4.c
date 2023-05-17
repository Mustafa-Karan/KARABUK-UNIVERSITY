//Write C program to store data in structures dynamically. (In this example, you should to store the 
//information entered by the user using dynamic memory allocation.)
#include<stdio.h>
#include<stdlib.h>

struct student{
	char name[50];
	char surname[50];
	int no;
	int grade;
};

typedef struct student st;

st *getinfo(st *,int);
void showinfo(st *,int);

int main(void){
    st *students=(st*)malloc(sizeof(st));
	int n;
	printf("HOW MANY STUDENTS WILL ENTER:");
	scanf("%d",&n);
	showinfo(getinfo(students,n),n);
	return 0;
}
st *getinfo(st *students,int n){
	int i=0;
	for(i;i<n;i++){
		students=(st*)realloc(students,(i+1)*sizeof(st));
		printf("%d. STUDENT'S NAME:",i+1);
		scanf("%s",(students+i)->name);
		printf("%d. STUDENT'S SURNAME:",i+1);
		scanf("%s",(students+i)->surname);
		printf("%d. STUDENT'S NO:",i+1);
		scanf("%d",&(students+i)->no);
		printf("%d. STUDENT'S GRADE:",i+1);
		scanf("%d",&(students+i)->grade);
	}
	return students;
}
void showinfo(st *students,int n){
	int i=0;
	printf("\n");
	for(i;i<n;i++){
		printf("%d. STUDENT'S NAME:%s\n",i+1,(students+i)->name);
		printf("%d. STUDENT'S SURNAME:%s\n",i+1,(students+i)->surname);
		printf("%d. STUDENT'S NO:%d\n",i+1,(students+i)->no);
		printf("%d. STUDENT'S GRADE:%d\n",i+1,(students+i)->grade);
		printf("\n");
	}
}
