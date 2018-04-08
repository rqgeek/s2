long int factorial(int n)
{
        if(n!=0)
                return n*factorial(n-1);        //find factorial
        else
                return 1;
}

