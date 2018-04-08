#include<stdio.h>
void quicksort(int number[25],int start,int end)
	{
	int n,pivotnum,m,temp;
  	if(start<end)
		{
      		pivotnum=start;
      		m=start;
      		n=end;
      		while(m<n)
			{
        		 while(number[m]<=number[pivotnum]&&m<end)
            		m++;
         		while(number[n]>number[pivotnum])
            		n--;
         		if(m<n)
				{
            			temp=number[m];
            			number[m]=number[n];
            			number[n]=temp;
         			}
      		}
      	temp=number[pivotnum];
      	number[pivotnum]=number[n];
      	number[n]=temp;
      	quicksort(number,start,n-1);
      	quicksort(number,n+1,end);
   }
}

int main()
{
   int m,count, number[25];
   printf("Enter the elements ");
   scanf("%d",&count);
 printf("Enter %d elements: ", count);
   for(m=0;m<count;m++)
      scanf("%d",&number[m]);
   quicksort(number,0,count-1);
   printf("Order of Sorted elements: ");
   for(m=0;m<count;m++)
      printf(" %d",number[m]);
	printf("\n");
   return 0;
}


