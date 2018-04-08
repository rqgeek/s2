#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
}*First,*temp,*last,*current,*t;
void print(){
	current=First;
	while(current!=NULL){
		printf("%d  ", current->data);
		current=current->next;
	}
}
void reverse(){
	current=First;
	First=last;
	last=current;
	t=current;
	current=t->next;
	while(current!=NULL){
		temp=current->next;
		current->next=t;
		t=current;
		current=temp;
	}
	last->next=NULL;
}
void main(){
	int n;
	printf("Enter the number of elements in linked list:");
	scanf("%d",&n);
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
	printf("Original linked list\t:");
	print();
	reverse();
	printf("\nReversed linked list\t:");
	print();
	printf("\n");
}
