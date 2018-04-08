#include<stdio.h>
main()
{
	int x;
	char y[10];
	float z;
	printf("Enter a number, string and a  floating point number");
	scanf("%d%s%f", &x, y, &z);
	printf("x : %d\ny : %s\nz : %f", x, y, z);
	return 0;
}
