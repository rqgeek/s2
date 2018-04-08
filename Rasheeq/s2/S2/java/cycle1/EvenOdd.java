class EvenOdd{
	public static void main(String args[]){
		int num=Integer.parseInt(args[0]);
		System.out.println("***Even/Odd***");
		if(num%2==0)
			System.out.println(num+" is Even");
		else
			System.out.println(num+" is Odd");
		System.out.println("**************");
	}
}
