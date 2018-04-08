import java.io.*;
class Matrix1{
	public static void main(String args[])throws IOException{
		
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int a[][]=new int[20][20];
		int b[][]=new int[20][20];
		int sum[][]=new int[20][20];
		int dif[][]=new int[20][20];
		int prod[][]=new int[20][20];
		int i=0,j=0,k=0,r1=0,c1=0,r2=0,c2=0;
		System.out.println("---***### M A T R I X ###***---");
		System.out.println("Enter the details of Matrix 1:-");
		System.out.print("Number of rows\t:");
		try{
			r1=Integer.parseInt(br.readLine());
			System.out.print("Number of columns\t:");
			c1=Integer.parseInt(br.readLine());
			System.out.println("Enter the details of Matrix 2:-");
			System.out.print("Number of rows\t:");
			r2=Integer.parseInt(br.readLine());
			System.out.println("Number of columns\t:");
			c2=Integer.parseInt(br.readLine());
		}catch(Exception e){}
		System.out.println("\n");
		if((r1!=r2||c1!=c2)&&c1!=r2){
			System.out.println("The matrices does not support addition,substraction and multiplication");
		}else{
			if(r1!=r2||c1!=c2){
				System.out.println("This matrices cannot be added or substracted");
			}
			readMatrix(r1,c1,a);
			readMatrix(r2,c2,b);		
			System.out.println("Matrix - I");
			printMatrix(r1,c1,a);
			System.out.println("Matrix - II");
			printMatrix(r2,c2,b);
			if(!(r1!=r2||c1!=c2)){
				computeMatrix(r1,c1,a,b,sum,dif);
				System.out.println("Matrix - I+II");
				printMatrix(r1,c1,sum);
				System.out.println("Matrix - I-II");
				printMatrix(r2,c2,dif);
			}
		}
		if(c1!=r2){
			System.out.println("The matrix cannot be multiplied");
		}else{
			multMatrix(r1,c1,c2,a,b,prod);
			System.out.println("Matrix - IxII");
			printMatrix(r1,c2,prod);
		}
	}
	static void readMatrix(int m,int n,int a[][]) throws IOException{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter the elements of the matrix");
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				a[i][j]=Integer.parseInt(br.readLine());
			}
		}
	}
	static void computeMatrix(int m,int n,int a[][],int b[][],int sum[][],int dif[][]){
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				sum[i][j]=a[i][j]+b[i][j];
				dif[i][j]=a[i][j]-b[i][j];
			}
		}
	}
	static void multMatrix(int r1,int c1,int c2,int a[][],int b[][],int p[][]){
		for(int i=0;i<r1;i++){
			for(int j=0;j<c1;j++){
				for(int k=0;k<c2;k++){
					p[i][k]+=a[i][j]*b[j][k];
				}
			}
		}
	}
	static void printMatrix(int m,int n,int a[][]){
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				System.out.print(a[i][j]+"  ");
			}
			System.out.println();
		}
	}
}

