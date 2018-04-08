#include<stdio.h>
main()
{
	int n, sq;
	printf("Enter a number to see prime numbers less that it : ");
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		int j;
		for(j=2;j<=i/2 && !(i%j==0);j++);
		if((j>i/2))
			printf("%d, ", i);
	}
	return 0;
}
