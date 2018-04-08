#include<stdio.h>
void main(){
	char temp[1000];	//temporary character array
	FILE *f1, *f2, *of;	//three file pointers
	f1 = fopen("txt1.txt", "r");	//open 1st text file
	f2 = fopen("txt2.txt", "r");	//open 2nd text file
	of = fopen("out.txt", "w");	//open output text file
	if(f1==NULL&&f2==NULL&&of==NULL){	//if cant open
		printf("Something went wrong please try again\n");
	}
	else{
		fscanf(f1, " %[^\eof]", temp);	//read everything in file1 to temp
		fprintf(of, " %s", temp);	//write the string temp to outfile
		fscanf(f2, " %[^\eof]", temp);	//read everything in file2
		fprintf(of, " %s", temp);	//write the string temp to outfile
		printf("Successfully copied the two files to out.txt\n");
	}
}
