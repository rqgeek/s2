#include<stdio.h>
#include<ctype.h>
#include<string.h>
void toupperstr(char dest[],char src[]);	//function ptototype 
void main()
{
	char src[100],des[100];	//to store two strings
	printf("Enter a string in lowercase:");
	scanf("%[^\n]", src);	//read a string including spaces
	toupperstr(des,src);	//call function to convert to uppercase
}

//function definition, to convert lowercase to uppercase
void toupperstr(char dest[],char src[])
{
	for(int i=0;i<strlen(src);i++){	
		dest[i] = toupper(src[i]);	//convert all character to uppercase
	}
	printf("%s\n", dest);	//display the uppercase string
}
