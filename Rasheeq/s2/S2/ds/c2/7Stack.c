#include<stdio.h>
int top=-1;
void create(int a[]){
	top=-1;
	printf("The Stack is created\n");
}
void push(int a[],int n){
	a[top+1]=n;
	printf("%d is pushed into Stack\n",n);
	top++;
}
void pop(int a[]){
	if(top!=-1){
	int temp=a[top];
	a[top]=0;
	printf("%d from top of the stack is popped out\n",temp);
	top--;
	}else{
		printf("Stack is empty cant pop\n");
	}
}
void isempty(int a[]){
	if(top<0){
		printf("Stack is empty\n");
	}
	else{
		printf("Stack is not empty\n");
	}
}
void print(int a[]){
	for(int i=0;i<=top;i++){
		printf("%d  ",a[i]);
	}
	printf("\n");
}
void topp(int a[]){
	if(top!=-1){
		printf("top of the stack = %d\n",a[top]);
	}else{
		printf("Stack is empty!\n");
	}
}
void main(){
	int s[100],top,op,i;
	char u='y';
	while(u=='y'){
		printf("\033[38;2;0;255;0m\n****Stack Operations****\n\033[0m");
		printf("1 : Create\n");
		printf("2 : Push\n");
		printf("3 : Pop\n");
		printf("4 : Top\n");
		printf("5 : isempty\n");
		printf("6 : Display Stack\n");
		printf("Please select an option : ");
		scanf("%d",&op);
		switch(op){
			case 1:create(s);
				break;
			case 2:printf("Enter a number to push : ");
				scanf("%d",&i);
				push(s,i);
				break;
			case 3:pop(s);
				break;
			case 4:topp(s);
				break;
			case 5:isempty(s);
				break;
			case 6:print(s);
				break;
			default:printf("\033[38;2;255;0;0mError! Invalid option\n\033[0m");
				break;
		}
		printf("Do you want to conitnue (y/n) : ");
		scanf(" %c",&u);
	}
}

          
