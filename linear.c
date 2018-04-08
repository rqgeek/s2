 #include<stdio.h>
        void main()     
                {
                int n,a[200],num,i,flag=0,pos;      $
                printf(" \n Enter the limit ");
                scanf("%d",&n);
                printf("\n enter the elements :");  $
                for(i=0;i<n;i++)
                        {
                        scanf("%d",&a[i]);
                        }
                printf("\n enter the element to be s$
                scanf("%d",&num);
                for(i=0;i<n;i++)
                        {
                        if(a[i]==num)               $
                                {

                                printf("\n%d is foun$

                                flag=1;
                                }
                        }
                        if(flag==0)
                                {
                                printf("\n %d is not$
                                }

                }



