#include<stdio.h>
void main()
	{
	int a[10],i,j,n,t,k;
	printf("\n enter the limit");
	scanf("%d",&n);
	printf("\n enter the elements");
	for(i=0;i<n;i++)
		{
		scanf("%d",&a[i]);
		}
	 for(i=1;i<n;i++)
		 {
		k=a[i];
		j=i-1;
		while(j>=0 && a[j]>a[j+1])
			{
			a[j+1]=a[j];
			a[j]=k;
			j--;
			}
		 }
	printf("Inserted sorted elements:\n");
	for(i=0;i<n;i++)
		{
		printf("\t%d",a[i]);
		}
	}
