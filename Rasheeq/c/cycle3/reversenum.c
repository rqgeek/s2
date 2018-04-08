#include<stdio.h>
main()
{
	int num, reverse, a,n;
	printf("Enter a number to reverse it\t:");
	scanf("%d", &num);
	n = num;
	while(num>0)
	{
		a = num%10;
		num = num/10;
		reverse = (reverse*10) + a;
	}
	printf("\nEntered number\t:%d\nReverse\t\t:%d\n", n, reverse);
}
