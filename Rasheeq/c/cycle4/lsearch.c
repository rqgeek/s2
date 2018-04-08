#include<stdio.h>
int main(){
	int list[100],n,i,key;	//to store n,i,item and elements
	printf("Enter the number of elements : ");
	scanf("%d", &n);	//read the limit n
	printf("Enter %d elements\n", n);
	for(i=0;i<n;i++)
		scanf("%d", &list[i]);	//read n elements
	printf("Enter the item to be searched : ");
	scanf("%d", &key);	//read the item to be searched
	for(i=0;i<n;i++){
		if(list[i]==key){		//check item is in the list
			printf("%d is found at position %d\n", key, i+1);
			break;
		}
	}
	if(i==n)
		printf("%d is not found in the list\n", key);
	return 0;
}
