class Constr{
	Constr(){
		System.out.println("1 : Default constructor");
	}
	Constr(int i){
		System.out.println(i + " : Parameterized constructor");
	}
}
class ConsOverload15{
	public static void main(String args[]){
		Constr o1=new Constr();
		Constr o2=new Constr(2);
	}
}
