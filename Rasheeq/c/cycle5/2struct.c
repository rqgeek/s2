#include<stdio.h>
void main(){
	int n;	//to store the number of students
	struct stdDetails{	//structure variable to stroe student details
		char name[100];	//to store student name
		int mark1,mark2,mark3,total;	//to store student marks and total
	};
	printf("Enter the number of students : ");
	scanf("%d", &n);	//read number of students
	struct stdDetails std[n];	//create a array of structure
	for(int i=0;i<n;i++){
		printf("Enter the details of student %d\n", i+1);
		printf("Name\t:");	//read name of the student
		scanf("%s", std[i].name);
		printf("Mark 1\t:");
		scanf("%d", &std[i].mark1);	//read mark1
		printf("Mark 2\t:");
		scanf("%d", &std[i].mark2);	//read mark2
		printf("Mark 3\t:");	
		scanf("%d", &std[i].mark3);	//read mark3
		std[i].total = std[i].mark1+std[i].mark2+std[i].mark3;
	}
	printf("\nName\t\tTotal Mark\n----------------------------\n");
	for(int i=0;i<n;i++){
		printf("%-15s %d\n", std[i].name, std[i].total);
	}
}
