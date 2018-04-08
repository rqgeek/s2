include<stdio.h>
void bs(int a[],int l,int h,int k)
{
int m;

if(l<=h)
{

m=(l+h)/2;
if(k==a[m])
printf("Item found at location %d",m+1);
else if (k<a[m])bs(a,l,m-1,k);
else bs(a,m+1,h,k);
}
}


void main()
{
int a[25],h,l=0,k,i,lm;
printf("Enter the limit");
scanf("%d",&lm);
h=lm-1;
printf("Enter the elements");
for( i=0;i<lm;i++)scanf("%d",&a[i]);
printf("Enter the key to be searched");
scanf("%d",&k);
bs(a,l,h,k);
}


