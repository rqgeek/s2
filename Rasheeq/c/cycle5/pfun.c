#include<stdio.h>
#include<ctype.h>
#include<string.h>
int execute(int (*fname)(int),int n);	//function declaration
void main(){
	char lstr[30],ustr[30];	//two strings for lowercase and uppercase
	printf("Enter a string in lowercase : ");
	scanf(" %[^\n]", lstr);	//read a string in lowercase
	printf("Enter a string in uppercase : ");
	scanf(" %[^\n]", ustr);	//read a string in uppercase
	printf("***Before changing the case***\n");
	printf("1 : %s\n", lstr);	//display the two strings
	printf("2 : %s\n", ustr);
	for(int i=0;i<strlen(lstr);i++){
		lstr[i] = execute(toupper,lstr[i]);	//convert to uppercase
	}
	for(int i=0;i<strlen(ustr);i++){
		ustr[i] = execute(tolower, ustr[i]);	//convert to lowercase
	}
	printf("***After changing the case***\n");
	printf("1 : %s\n", lstr);	//display the converted strings
	printf("2 : %s\n", ustr);
}

//Function definition of execute
int execute(int (*fname)(int),int n){
	return fname(n);	//call the function 
}
