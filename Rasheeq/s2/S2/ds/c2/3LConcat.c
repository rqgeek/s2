#include<stdio.h>
#include<stdlib.h>
struct Node{
        int data;
        struct Node *next;
}*First1,*First2,*temp,*last1,*last2,*current,*First,*last;
int i=0;
void print(struct Node *First){
        current=First;
        while(current!=NULL){
                printf("%d  ", current->data);
                current=current->next;
        }
}
struct Node* read(int n){
        printf("Enter the elements\t:");
        current=(struct Node*) malloc(sizeof(struct Node));
        scanf("%d",&current->data);
        current->next=NULL;
        First=current;
        for(int i=1;i<n;i++){
                temp=(struct Node*) malloc(sizeof(struct Node));
                scanf("%d",&temp->data);
                temp->next=NULL;
                current->next=temp;
                current=temp;
        }
        last=current;
        if(i==0){
                last1=last;
                i++;
        }
        else last2=last;
        return First;
}
void main(){
        int n,m;
        printf("Enter the number of elements in linked list 1:");
        scanf("%d",&n);
        First1=read(n);
        printf("Enter the number of elements in linked list 2:");
        scanf("%d",&m);
        First2=read(m);
        printf("Linked list 1\t:");
        print(First1);
        printf("\n");
        printf("Linked list 2\t:");
        print(First2);
        printf("\n");
        last1->next=First2;
        printf("Concatenated Linked list \t:");
        print(First1);
        printf("\n");
}
