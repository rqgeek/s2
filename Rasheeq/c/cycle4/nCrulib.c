#include<stdio.h>
#include "factorial.h"
long int nCr(int, int);         //to find nCr
int main()
{
        long int n, r, ncr;             //to store n, r and nCr
        printf("Enter n :");
        scanf("%ld", &n);       //read n
        printf("Enter r :");
        scanf("%ld", &r);       //read r
        ncr = nCr(n, r);        //call function nCr to find nCr
        printf("%ldC%ld = %ld\n", n, r, ncr);   //display the result n$
        return 0;
}
long int nCr(int n, int r)
{
        return factorial(n)/(factorial(r)*factorial(n-r));      //find$
}
