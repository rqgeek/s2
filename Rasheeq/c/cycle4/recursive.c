#include<stdio.h>
int power(int, int);
main()
{
	int x, n, p;	//to store x, n and the result
	printf("Enter a number : ");
	scanf("%d", &x);	//read x
	printf("Enter the power : ");
	scanf("%d", &n);	//read n
	p = power(x,n);		//call the function power()
	printf("%d^%d = %d\n", x, n, p);//display the result
	return;
}
power(int x, int n)
{
	if(n!=0)
		return  x*(power(x, n-1));
	else 
		return 1;
}
