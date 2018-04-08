#include<stdio.h>  
#include<stdlib.h>
struct node
{
   int data;
   struct node *next;
}*head;

void insert_data(int value)
{
    struct node *var,*temp; 
    temp=head;
    var=(struct node *)malloc(sizeof(struct node));
    var->data=value;

    if(head==NULL)
    {
        head=var;
        head->next=NULL;
    }
    else
    {
         while(temp->next!=NULL)
         {
              temp=temp->next;
         }
         var->next=NULL;
         temp->next=var;
    }
}

void reverse_list()
{
    struct node *temp,*temp1,*var;
    temp=head;
    var=NULL;
    while(temp!=NULL)
    {
         temp1=var;
         var=temp;
         temp=temp->next;
         var->next=temp1;
    }
    head=var;
}

void display()
{
    struct node *var;
    var=head;
    printf("\nlist of elments are \n");
    while(var!=NULL)
    {
         printf("%d ",var->data);
         var=var->next;
    }
}

int main()
{
    int i,value,l=0,f=0;
    char ch='y';
    head=NULL;

    printf(" 1.)  Insert");
    printf("\n 2.)  display");
    printf("\n 3.)  reverse");
    printf("\n 4.)  exit");
    while(ch=='y')
    {
         printf("\nChoose to do operation :");
         scanf("%d",&i);
         switch(i)
         {
             case 1 :
             {
             printf("\nEnter the number of elements to be inserted");
	     scanf("%d",&l);
		printf("\nEnter the data to be inserted in node"); 
		for(f=0;i<l+1;i++)
		{
             scanf("%d",&f);
             insert_data(f);
		}
               break;
             }
             case 2 :
             {
             display();
             break;
             }
             case 3 :
             {
             reverse_list();
             display();
             break;
             }
             case 4 :
             {
             exit(0);
             break;
             }
        }
   }
}
