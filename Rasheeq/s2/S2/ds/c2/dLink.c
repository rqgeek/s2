#include<stdio.h>
#include<stdlib.h>
struct Node{
	int value;
	struct Node *llink;
	struct Node *rlink;
}*first,*temp,*last;
void insert(){
	temp=(struct Node*)malloc(sizeof(struct Node));
	printf("Enter the element to insert : ");
	scanf("%d",&temp->value);
	if(first==NULL){
		first=temp;
		first->llink=NULL;
		first->rlink=NULL;
		last=first;
	}else{
		last->rlink=temp;
		temp->llink=last;
		last=temp;
		last->rlink=NULL;
	}
}

struct Node* search(int n){
	if(first!=NULL){
		temp=first;
		while(temp!=NULL){
			if(temp->value==n){
				return temp;
				break;
			}else{
				temp=temp->rlink;
			}
		}
	}
	return NULL;
}
int Delete(){
	int n;
	if(first==NULL){
		return 2;
	}else{
		printf("Enter an element to delete : ");
		scanf("%d",&n);
		temp=search(n);
		if(temp!=NULL){
			if(first->rlink==NULL){
				first=NULL;
				free(temp);
			}else if(temp==first){
				first->rlink->llink=NULL;
				first=first->rlink;
				free(temp);
			}else if(temp==last){
				last->llink->rlink=NULL;
				last=last->llink;
				free(temp);
			}else{
				temp->llink->rlink=temp->rlink;
				temp->rlink->llink=temp->llink;
				free(temp);
			}
		}
	}
	return 3;
}
void print(int m){
	temp=first;
	if(temp==NULL){
		printf("Linked list is empty!\n");
	}else{
		printf("Elements : - ");
		while(temp!=NULL){
			printf("%d  ",temp->value);
			temp=temp->rlink;
		}
		if(m==1){
			printf(" | Found in the list");
		}else if(m==0){
			printf(" | Not found!");
		}else if(m==2){
			printf(" | Linked list is empty!");
		}
		printf("\n");
	}
}
void main(){
	int op=0,n,m=3;
	first=NULL;
	last=NULL;
	do{
//		printf("\033[2J\033[1;1H*** Doubly linked list ***\n");
		printf("*** Doubly linked list ***\n");
		printf("1 : insert\n");
		printf("2 : Delete\n");
		printf("3 : Search\n");
		printf("0 : EXIT\n");
		print(m);
		m=3;
		printf("Enter an option (0 - 3) :");
		scanf("%d",&op);
		switch(op){
			case 0: break;
			case 1: insert();
				break;
			case 2: m=Delete();
				break;
			case 3: printf("Enter an element to search : ");
				scanf("%d",&n);
				temp=search(n);
				if(temp==NULL){
					m=0;
				}else{
					m=1;
				}
				break;
			default:printf("Invalid option! try again\n");
				break;
		}
	}while(op!=0);
}
