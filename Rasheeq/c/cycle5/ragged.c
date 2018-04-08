#include<stdio.h>
#include<string.h>
void display(char*[7]);	//function prototype of display
void main(){
	char *colors[7]={"violet","indigo","blue","green","yellow","orange","red"};
	char *temp;	//a temporary pinter for swapping
	printf("***Before sorting***\n");
	display(colors);	//display colours before sorting
	for(int i=0;i<7;i++){
		for(int j=i+1;j<7;j++){
			if(strcmp(colors[i],colors[j])>0){	//check ith is greater than j or not
				temp=colors[i];		//swap them
				colors[i]=colors[j];
				colors[j]=temp;
			}
		}
	}
	printf("***After sorting**\n");
	display(colors);	//display sorted list
}
//Function for displaying the list
void display(char *c[7]){
	for(int i=0;i<7;i++){
		printf("%d : %s\n",i+1,c[i]);	//display the colours
	}
}
