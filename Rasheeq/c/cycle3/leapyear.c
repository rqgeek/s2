#include<stdio.h>
main()
{
	int year;
	printf("Enter a year to check whether it is a leap year or not : ");
	scanf("%d", &year);
	if(year%4 == 0)
	{
		printf("%d is a Leap Year\n", year);
	}
	else
		printf("%d is not a leap year\n", year);
	return 0;
}
