#include<stdio.h>
main()
{
	int num, n;
	printf("Enter a number : ");
	scanf("%d", &num);
	printf("Enter another number to check whehter %d is multiple of it : ", num);
	scanf("%d", &n);
	if(num%n == 0)
	{
		printf("%d is a multiple of %d\n", num, n);
	}
	else
	{
		printf("%d is not a multiple of %d\n", num, n);
	}
	return 0;
}
