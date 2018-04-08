#include<stdio.h>
int fib();
int main()
{
	int n;	//to store value n
	printf("Enter n: ");
	scanf("%d", &n);	//read n
	printf("%d Fibonacci numbers\n0, ", n);	//display first zero in fibonacci series
	for(int i=1;i<n;i++)	//loop to repeat n-1 times
	{
		printf("%d, ", fib());	//display fibonacci series
	}
	return 0;
}
int fib()	//function to find fibonacci series
{
	static int a = 0, b = 1, c = 0;
	a = b;
	b = c;
	c = a + b;
	return c;
}
