#include<stdio.h>
#include<string.h>
void display(char*[7]);
void main(){
	char *colors[7]={"violet","indigo","blue","green","yellow","orange","red"};
	char *temp;
	printf("***Before sorting***\n");
	display(colors);
	for(int i=0;i<7;i++){
		for(int j=0;j<7;j++){
			if(strcmp(colors[i],colors[j])<0){
				temp = colors[j];
				colors[j]=colors[i];
				colors[i]=temp;
			}
		}
	}
	printf("***After sorting**\n");
	display(colors);
}

void display(char *c[7]){
	for(int i=0;i<7;i++){
		printf("%d : %s\n",i+1,c[i]);
	}
}
