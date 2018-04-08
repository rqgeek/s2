class Swap{
	public static void main(String args[]){
		int num1,num2;
		num1=Integer.parseInt(args[0]);
		num2=Integer.parseInt(args[1]);
		System.out.println("****Swap***");
		System.out.println("Before\t: Num1="+num1+" Num2="+num2);
		num1=num1+num2;
		num2=num1-num2;
		num1=num1-num2;
		System.out.println("After\t:Num1="+num1+" Num2="+num2);
		System.out.println("********");
	}
}
