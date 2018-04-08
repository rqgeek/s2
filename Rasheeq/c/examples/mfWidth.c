#include<stdio.h>
main()
{
	char name[20];
	int age;
	printf("Enter your name :");
	scanf("%s", name);
	printf("Enter your age :");
	scanf("%d", &age);
	printf("---Entered values---\n%25s\n%25d", name, age);
	printf("\n---END---\n");
	return 0;
}
