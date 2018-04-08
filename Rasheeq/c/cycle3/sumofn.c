#include<stdio.h>
main()
{
	int n, num, sum=0;
	printf("Enter a number to find the sum : ");
	scanf("%d", &n);
	num = n;
	do{
		sum = sum + n;
		n--;
	}while(n>0);
	printf("Sum of numbers upto %d is : %d\n", num, sum);
}
