class Sub1{
	public static int a=10;
	private static int b=20;
	static int getb(){
		return b;
	}
}
class Sub2 extends Sub1{
	private static void show(){
		System.out.println("Value of b="+getb());
		System.out.println("Value of a="+a);
	}
	public static void printb(){
		show();
	}
}
class Multi21 extends Sub2{
	public static void main(String args[]){
		printb();
	}
}
