//Define a struct named ‘student’ for course attendance list of students. This struct consists of ‘number’, ‘name’, ‘surname’, 
//and ‘midtermGrade’ fields. Using this struct you defined, create a struct array for 10 students and get the information of 3 
//students from the keyboard. Then, print the information of the students whose information was entered.
#include<stdio.h>

 struct student{
	int number;
	char name[50];
	char surname[50];
	float midgrade;
};

//typedef struct student st;

int main(){
	struct student students[10];
	int i=0,n;
	printf("HOW MANY STUDENTS ENTERED MAX 10:");
	scanf("%d",&n);
	for(i;i<n;i++){
		printf("%d. STUDENT'S NUMBER:",i+1);
		scanf("%d",&students[i].number);
		printf("%d. STUDENT'S NAME:",i+1);
		scanf("%s",students[i].name);
		printf("%d. STUDENT'S SURNAME:",i+1);
		scanf("%s",students[i].surname);
		printf("%d. STUDENT'S MIDTERM GRADE:",i+1);
		scanf("%f",&students[i].midgrade);
		printf("\n");
		}
		printf("\n");
	for(i=0;i<n;i++){
		printf("%d. STUDENT'S NUMBER:%d\n",i+1,students[i].number);
		printf("%d. STUDENT'S NAME:%s\n",i+1,students[i].name);
		printf("%d. STUDENT'S SURNAME:%s\n",i+1,students[i].surname);
		printf("%d. STUDENT'S MIDTERM GRADE:%f",i+1,students[i].midgrade);
		printf("\n\n");
		}
	return 0;
}
