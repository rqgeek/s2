class Sub{
	static void disp(){
		System.out.println("This is subclass's function");
	}
}
class Inheritance17 extends Sub{
	public static void main(String args[]){
		print();
	}
	static void print(){
		System.out.println("This is the main class's function");
		disp();
	}
}
