#include<stdio.h>
void readMatrix(int[100][100],int,int);
void addMatrix();
void multiply();
void printmatrix(int, int, int[100][100]);

static int m,n,p,q, a[100][100], b[100][100],sum[100][100],prod[100][100];
void main()
{
	do{
		printf("Enter the number of rows of matrix A: ");
		scanf("%d", &m);	
		printf("Enter the number of colums of matrix A: ");
		scanf("%d", &n);
		printf("Enter the number of rows of matrix B:");
		scanf("%d", &p);
		printf("Enter the number of columns of matrix B:");
		scanf("%d", &q);
	}while(!(m==p&&n==q) && !(n==p));
	printf("Enter the elements of matrix A\n");
	readMatrix(a,m,n);
	printf("Enter the elements of matrix B\n");
	readMatrix(b,m,n);
	printf("---Matrix A---\n");
	printmatrix(m,n,a);
	printf("---Matrix B---\n");
	printmatrix(p,q,b);
	addMatrix();
	multiply();
}

//function to display the matrices
void printmatrix(int m1,int n1, int a1[100][100]){
	for(int i1=0;i1<m1;i1++){
		for(int j1=0;j1<n1;j1++)
			printf("%d  ", a1[i1][j1]);
		printf("\n");
	}
}
//function for matrix addition
void addMatrix(){
	if(!(m==p&&n==q)){
		printf("This matrix cant be added order is different\n");
		return;
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			sum[i][j] = a[i][j] +  b[i][j];
		}
	}
	printf("---Matrix A + Matrix B---\n");
	printmatrix(m,n,sum);
}

//function matrix multiplication
void multiply(){
	if(!(n==p)){
		printf("This matrices cant be multiplied n!=p\n");
		return;
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<q;j++){
			for(int k=0;k<q;k++){
				prod[i][j]+= a[i][k]*b[k][i];
			}
		}
	}
	printf("---Matrix A X Matrix B---\n");
	printmatrix(m,q,prod);
}


//function to read matrix 
void readMatrix(int matrix[100][100], int m,int n){
	for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                        scanf("%d", &matrix[i][j]);
                }
        }
} 
