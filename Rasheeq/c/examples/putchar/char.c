#include<stdio.h>
#include<ctype.h>
main()
{
	char c;
	printf("Enter a character : ");
	c = getchar();
	printf("\nThe entered character is : ");
	putchar(c);
	printf("\nCharacter of the ASCII code 65 is ");
	putchar(65);
	printf("\nIn uppercase : %c", toupper(c));
	printf("\nIn Lowercase : %c\n", tolower(c));
}
