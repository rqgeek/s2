#include<stdio.h>
int a[10],i=0,d=0;
void read()
{
int val,k,j;
j=d;
	if(i==10)
		printf("QUEUE IS FULL\n");
	else{
        if(i==0&&a[0]==0)
        {
                printf("enter the limit:");
                scanf("%d",&k);
                printf("enter the elements ");
                for(int j=0;j<k;i++,j++)
                         scanf("%d",&a[i]);
        }
        else 
        {
                printf("enter the elements ");
                scanf("%d",&a[i]);
                i++;
        }
        printf("QUEUE IS");
        for(j=d;j<i;j++)
                printf("        %d",a[j]);
}}
void dele()
{
a[d]=0;
d++;
if(d==i&&a[d]==0){
        printf("QUEUE is empty\n");

        }
else{
	printf("AFTER DELETION	");
for(int j=d;j<i;j++)
        printf("%d      ",a[j]);
}
}

void main()
{
int j=0;
 while(j!=3)
    {
    printf("\n 1.)  Insert  2.) DELETE   3.)Exit\n");

         printf("\nEnter Your Option :");
         scanf("%d",&j);
         switch(j)
         {
             case 1 :read();
                break;
                case 2:dele();
                break;
        }
  }

}



