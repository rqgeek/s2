class Sample{
	void disp(){
		System.out.println("Default constructor worked");
	}
	void disp(int i){
		System.out.println("Parameterized constructor worked parameter="+i);
	}
	void disp(int i,int j){
		System.out.println("Parameterised constructor2 worked parameter="+i+" & "+j);
	}
}
class MethodOver{
	public static void main(String args[]){
		Sample obj=new Sample();
		obj.disp();
		obj.disp(10);
		obj.disp(1,54);
	}
}
