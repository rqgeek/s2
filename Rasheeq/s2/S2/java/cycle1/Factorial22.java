import java.io.*;
class Factorial22{
	static BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
	public static void main(String args[]){
		int n=0,f;
		System.out.print("Enter a number to find its factorial: ");
		try{
			n=Integer.parseInt(br.readLine());
		}catch(Exception e){
		}
		System.out.println("\tFactorial of "+n+" is ");
		f=factorial(n);
		System.out.println(" = "+f);
	}
	static int factorial(int n){
		if(n==0){
			return 1;
		}else{
			System.out.print(n);
			if(n!=1){
				System.out.print("x");
			}
			return n*factorial(n-1);
		}
	}
}

