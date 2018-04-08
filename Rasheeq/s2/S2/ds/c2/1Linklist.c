#include<stdio.h>d
#include<stdlib.h>
#include<string.h>
struct Node{
	int value;
	struct Node *next;
}*First,*last,*temp,*current,*New,*before;
void readList(){
	char c[5];
	printf("Enter the elements of the linked list (Enter \'q\' to quit)\n");
	scanf(" %[0-9q]",c);
	if(strcmp(c,"q")==0){
		exit(0);
	}else{
		current=(struct Node*)malloc(sizeof(struct Node));
		current->value=atoi(c);
		current->next=NULL;
		First=current;
		last=current;
	}
	while(scanf(" %[0-9q]",c) && strcmp(c,"q")!=0){
		temp=(struct Node *)malloc(sizeof(struct Node));
		temp->value=atoi(c);
		temp->next=NULL;
		current->next=temp;
		current=temp;
		last=temp;
	}
}
void print(){
	current=First;
	while(current!=NULL){
		printf("%d  ",current->value);
		current=current->next;
	}
}
void findLoc(int i){
	current=First;
	temp=NULL;
	before=NULL;
	while(current!=NULL){
		if(current->value==i){
			temp=current;
			break;
		}else{
			before=current;
			current=current->next;
		}
	}
}
void insert_after(int i){
	int value;
	findLoc(i);
	if(temp==NULL){
		printf("%d is not found in the list\n",i);
	}else{
		printf("Enter the new value to insert : ");
		scanf("%d",&value);
		current=temp->next;
		New=(struct Node*)malloc(sizeof(struct Node));
		New->value=value;
		New->next=current;
		temp->next=New;
	}
}
void insert_before(int i){
	int value;
	findLoc(i);
	if(temp==NULL){
		printf("%d is not found in the list\n",i);
	}else{
		printf("Enter a new value to insert : ");
		scanf("%d",&value);
		New=(struct Node*)malloc(sizeof(struct Node));
		New->value=value;
		if(before==NULL){
			New->next=First;
			First=New;
		}else{
			before->next=New;
			New->next=temp;
		}
	}
}
void Delete(int i){
	findLoc(i);
	if(temp!=NULL){
		if(before==NULL){
			First=First->next;
			free(temp);
		}else{
			before->next=temp->next;
			free(temp);
		}
	}else{
		printf("%d is not found in the list\n",i);
	}
}
void delete_after(int i){
	findLoc(i);
	if(temp->next==NULL){
		printf("No element after %d\n",i);
	}else{
		Delete(temp->next->value);
	}
}
void delete_before(int i){
	findLoc(i);
	if(before==NULL){
		printf("No element before %d\n",i);
	}else{
		Delete(before->value);
	}
}
void search(int i){
	findLoc(i);
	if(temp==NULL){
		printf("%d is not found in the list\n",i);
	}else{
		printf("%d is found in the list\n",i);
	}
}
int prompt(){
	int i;
	printf("Enter the value : ");
	scanf("%d",&i);
	return i;
}
void main(){
	printf("\033[2J\033[1;1H");
	printf("\033[38;2;10;200;7m\n****L I N K E D   L I S T****\n\033[0m");
	readList();
	int op,v;
	do{
		printf("\n1 : insert_after(i)\n");
		printf("2 : insert_before(i)\n");
		printf("3 : delete_after(i)\n");
		printf("4 : delete_before(i)\n");
		printf("5 : Delete(i)\n");
		printf("6 : search(i)\n");
		printf("7 : Print list\n");
		printf("8 : EXIT\n");
		printf("Please select one option : ");
		scanf("%d",&op);
		switch(op){
			case 1: insert_after(prompt());
				break;
			case 2: insert_before(prompt());
				break;
			case 3: delete_after(prompt());
				break;
			case 4: delete_before(prompt());
				break;
			case 5: Delete(prompt());
				break;
			case 6: search(prompt());
				break;
			case 7: print();
				break;
			case 8:exit(0);
			default:printf("Invalid input! try again\n");
				break;
		}
	}while(op!=8);
}

