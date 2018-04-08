#include<stdio.h>
void quicksort(int no[25],int first,int last){
	int i,j,pivot,temp;
	if(first<last){
		pivot=first;
		i=first;
		j=last;
		while(i<j){
			while(no[i]<=no[pivot]&&i<last)
				i++;
			while(no[j]>no[pivot])
				j--;
			if(i<j){
				temp=no[i];
				no[i]=no[j];
				no[j]=temp;
			}
		}
		temp=no[pivot];
		no[pivot]=no[j];
		no[j]=temp;
		quicksort(no,first,j-1);
		quicksort(no,j+1,last);
	}
}

int main(){
	int i,count,no[25];
	printf("Enter the number of elements\t:");
	scanf("%d",&count);
	printf("Enter %d elememts\t:",count);
	for(i=0;i<count;i++){
		scanf("%d",&no[i]);
	}
	quicksort(no,0,count-1);
	printf("Sorted elements are\t:");
	for(i=0;i<count;i++){
		printf("%d  ",no[i]);
	}
	printf("\n");
	return 0;
}

