class SumofDigits{
	public static void main(String args[]){
		int num=Integer.parseInt(args[0]);
		int sum=0,n=num;
		System.out.println("Sum of digits of :"+n);
		while(num>0){
			sum+=num%10;
			System.out.print(num%10);
			num/=10;
			if(num>0) System.out.print(" + ");
		}
		System.out.print(" =  "+sum+"\n");
	}
}
