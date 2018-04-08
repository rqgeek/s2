#include<stdio.h>
void main(){
	int n, i;
	printf("Enter a number to see the multiplication table : ");
	scanf("%d", &n);
	for(i=1;i<=10;i++){
		printf("%d * %d = %d\n", i, n, n*i);
	}
}
