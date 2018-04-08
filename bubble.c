#include<stdio.h>
void main()
	{
        int n,a[25],i,temp,j;          
        printf("enter the limit:");
        scanf("%d",&n);
        printf("enter the elements:\n");
        for(i=0;i<n;i++)
		{
        	scanf("%d",&a[i]);
		}
        printf("the sorted list is:\n");
        for(i=0;i<n-i-1;i++)
{
        for(j=0;j<n-i-1;j++)
{
        if(a[j]>a[j+1])
{
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
}
}
}
        for(i=0;i<n;i++)
{
        printf("%d\t",a[i]);
}
}


