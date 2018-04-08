class Nested16{
	static int i=10;
	static void disp(int n){
		System.out.print(n);
	}
	static class Inner{
		void print(){
			int i=20;
			System.out.print("\nValue of i in innerclass\t");
			disp(i);
		}
	}
	public static void main(String args[]){
		System.out.print("Value of i in outer class\t");
		disp(i);
		Inner i=new Inner();
		i.print();
		System.out.println();
	}
}
