class Sub{
	Sub(){
		System.out.println("Subclass's con structor invoked");
	}
}
class Sub2 extends Sub{
	Sub2(){
		super();
		System.out.println("Subclass 2's constructor invoked");
	}
}
class Super19{
	public static void main(String args[]){
		Sub2 obj=new Sub2();
	}
}
