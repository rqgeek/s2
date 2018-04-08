class Student{
	int roll,m1,m2,m3;
	Student(){
		roll=0;
		m1=0;
		m2=0;
		m3=0;
		System.out.println("[Default constructor is executed]");
	}
	Student(int r,int a,int b,int c){
		roll=r;
		m1=a;
		m2=b;
		m3=c;
		System.out.println("[Parameterised constructor is executed]");
	}
}
class 7Constructor{
	public static void main(String args[]){
		int r,m1,m2,m3;
		r = Integer.parseInt(args[0]);
		m1=Integer.parseInt(args[1]);
		m2=Integer.parseInt(args[2]);
		m3=Integer.parseInt(args[3]);
		Student s1=new Student();
		Student s1=new Student(r,m1,m2,m3);
		System.out.println("     Roll.No\tMarks");
		System.out.println("s1 : "+s1.r+"\t"+s1.m1+" "+s1.m2+" "+s1.m3);
		System.out.println("s2 : "+s2.r+"\t"+s2.m1+" "+s2.m2+" "+s2.m3);
	}
}
