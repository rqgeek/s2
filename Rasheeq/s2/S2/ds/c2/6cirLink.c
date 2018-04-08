#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Node{
int data;
struct Node *next;
}*First,*temp,*last,*current,*t,*d,*before;
void print(){
	printf("List items : - ");
	d=First;
	if(d!=NULL){
		while(d!=last){
			printf("%d ", d->data);
			d=d->next;
		}
		printf("%d ",d->data);
	}else printf("empty!");
}
void insert(){
	char c[5];
	printf("Enter the values of the list (Enter \'q\' to quit)\n");
	while(scanf(" %[0-9q]",c) && strcmp(c,"q")!=0){
		temp=(struct Node *)malloc(sizeof(struct Node));
		temp->data=atoi(c);
		temp->next=NULL;
		if(First==NULL){
			First=temp;
			last=temp;
			last->next=First;
			current=temp;
		}else{
			last->next=temp;
			last=temp;
			last->next=First;
		}
	}
	current=last;
}
void Delete(){
	d=First;
	temp=NULL;
	int i;
	printf("Enter the value to delete:");
	scanf("%d",&i);
	if(d==NULL){
		printf("List is empty!");
	}else{
		while(d!=NULL){
			if(d->data==i){
				temp=d;
				break;
			}
			if(d==last&&d->data==i){
				temp=d;
				break;
			}if(d==last) break;
                        before=d;
                        d=d->next;

		}
		if(temp!=NULL){
			if(temp==First){
				printf("first deleted : ");
				if(temp->next==First){
					First = NULL;
					last = NULL;
				}else{
					First=First->next;
					last->next=First;
					free(temp);
				}
			}else if(temp==last){
				last=before;
				last->next=First;
				free(temp);
			}
			else{
				before->next=temp->next;
				free(temp);
			}
		}else{
			printf("%d is not found in the list\n",i);
		}
	}
}
void main(){
	int op;
	current=NULL;
	First=NULL;
	do{
		printf("\033[2J\033[1;1H**** C I R C U L A R L I N K E D L I S T ****\n");
		print();
		printf("\n1 : Insert\n");
		printf("2 : Delete\n");
		printf("0 : EXIT\n");
		printf("Please enter an option (0 - 2)\n");
		scanf("%d",&op);
		switch(op){
			case 1: insert();
				break;
			case 2: Delete();
				break;
			case 0: exit(0);
		}
	}while(op!=0);
}
