#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *left;
	struct Node *right;
}*temp;
struct Node* insert(struct Node *node,int key){
	if(node==NULL){
		temp=(struct Node*)malloc(sizeof(struct Node));
		temp->data=key;
		temp->left=NULL;
		temp->right=NULL;
		node=temp;
		return temp;
	}else{
		if(key<node->data){
			insert(node->left),key);
		}else{
			insert(node->right),key);
		}
	}
}
void sort(struct Node *root,int arr[],int i){
	if(root!=NULL){
		sort(root->left,arr,i);
		arr[i+1]=root->data;
		i++;
		sort(root->right,arr,i);
	}
}
void treeSort(int arr[],int n){
	struct Node *root;
	root=NULL;
	root=insert(root,arr[0]);
	for(int i=1;i<n;i++){
		insert(root,arr[i]);
	}
	sort(root,arr,-1);
}
void main(){
	int arr[100],n;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	printf("Enter %d elements\n\t:",n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Before sort\t:");
	for(int i=0;i<n;i++){
		printf(" %d,",arr[i]);
	}
	printf("\nAfter sort\t:");
	treeSort(arr,n);
	for(int i=0;i<n;i++){
		printf(" %d,",arr[i]);
	}
	printf("\n");
}


