#include<stdio.h>
long int factorial(int);	//to find factorial
long int nCr(int, int);		//to find nCr
main()
{
	long int n, r, ncr;		//to store n, r and nCr
	printf("Enter n :");
	scanf("%ld", &n);	//read n
	printf("Enter r :");
	scanf("%ld", &r);	//read r
	ncr = nCr(n, r);	//call function nCr to find nCr
	printf("%ldC%ld = %ld\n", n, r, ncr);	//display the result nCr
	return;
}
long int nCr(int n, int r)
{
	return factorial(n)/(factorial(r)*factorial(n-r));	//find nCr = n!/(r!*(n-r)!)
}
long int factorial(int n)
{
	if(n!=0)
		return n*factorial(n-1);	//find factorial
	else
		return 1;
}
