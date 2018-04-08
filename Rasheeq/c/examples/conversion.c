#include<stdio.h>
main()
{
	float f;
	printf("Please enter a number :");
	scanf("%f", &f);
	printf("Entered number in floating point : %f", f);
	printf("\nIn Exponential : %e", f);
	printf("\n(g) : %g", f);
	printf("\n--------\bEND----------");
	return 0;
}
