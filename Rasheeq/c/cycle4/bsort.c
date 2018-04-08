#include<stdio.h>
void main(){
	int list[100], n,swap,i;	//to store list,n,swap values
	printf("Enter the number of elements :");
	scanf("%d", &n);	//read the limit n
	printf("Enter %d elements\n", n);
	for(i=0;i<n;i++)
		scanf("%d", &list[i]);	//read n elements
	printf("List before sort\t:");
	for(i=0;i<n;i++)
		printf("%d, ", list[i]);	//display list before sort
	for(i=0;i<n;i++)	//to sort the list
		for(int j=0;j<n-1;j++)
			if(list[j]>list[j+1]){
				swap = list[j+1];	//swap the elements
				list[j+1]=list[j];
				list[j]=swap;
			}
	//print sorted elements
	printf("\nList After sort\t:");
	for(i=0;i<n;i++)
		printf("%d, ", list[i]);
	printf("\n");
}
