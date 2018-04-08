class Sub{
	static void disp(){
		System.out.println("Sub class");
	}
}
class MOverride extends Sub{
	public static void main(String args[]){
		disp();
	}
	static void disp(){
		System.out.println("Main class");
	}
}
