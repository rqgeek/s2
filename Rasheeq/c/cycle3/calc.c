#include<stdio.h>
main()
{
	int a,b;
	char op;
	printf("Enter first operand : ");
	scanf("%d", &a);
	printf("Enter the operator : ");
	scanf(" %c", &op);
	printf("Enter the second operand : ");
	scanf("%d", &b);
	switch(op){
		case '*':printf("%d x %d = %d\n", a, b, a*b);
			break;
		case '/':printf("%d / %d = %.2f\n", a, b, (float)a/b);
                        break;
		case '+':printf("%d + %d = %d\n", a, b, a+b);
                        break;
		case '-':printf("%d - %d = %d\n", a, b, a-b);
                        break;
		default:printf("!Error please enter a valid input\n");	
			
	}
}

