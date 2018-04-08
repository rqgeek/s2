class Example{
	int a,b;
	void set(int n1,int n2){
		a=n1;
		b=n2;
	}
	int geta(){
		return a;
	}
	int getb(){
		return b;
	}
}
class Sixth{
	public static void main(String args[]){
		Example e= new Example();
		e.set(10,9);
		System.out.println("a="+e.geta()+"\tb="+e.getb()+"\n");
	}
}
