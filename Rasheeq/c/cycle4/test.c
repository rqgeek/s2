#include<stdio.h>
#include "factorial.h"
int main()
{
	int n;
	printf("Enter n to find n!:");
	scanf("%d",&n);
	printf("%d! = %ld",n,factorial(n));
	return 0;
}

