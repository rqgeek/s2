#include<stdio.h>
#include<math.h>
main()
{
	float n,x;
	float sin=0;
	int flag=1;
	printf("Enter n : ");
	scanf("%f", &n);
	printf("Enter x :");
	scanf("%f", &x);
	x = x*(3.14/180);
	for(int i=1;i<=n;i+=2){
		if(flag){
			sin = sin + (pow(x,i))/fact(i);
			flag = 0;
		}
		else{
			sin = sin - (pow(x,i))/fact(i);
			flag = 1;
		}
	}
	printf("\nThe value of sin(%f) = %f", x, sin);
}
int fact(int x)
{
	int f=1;
	for(int i=1;i<=x;i++){
		f = f*i; 
	}
	return f;
}
