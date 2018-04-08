class Student{
	int roll,m1,m2,m3;
	Student(){
		roll =0;
		m1=0;
		m2=0;
		m3=0;
		System.out.println("**Default constructor is worked**");
	}
	Student(int r,int a1,int a2,int a3){
		roll = r;
		m1=a1;
		m2=a2;
		m3=a3;
		System.out.println("**Parameterised constructor is worked**");
	}
}
class Constructor7{
	public static void main(String args[]){
		int r,m1,m2,m3;
		r=Integer.parseInt(args[0]);
		m1=Integer.parseInt(args[1]);
		m2=Integer.parseInt(args[2]);
		m3=Integer.parseInt(args[3]);
		Student s1=new Student();
		Student s2=new Student(r,m1,m2,m3);
		System.out.println("     Roll.No\tMarks");
		System.out.println("s1 : "+s1.roll+"\t"+s1.m1+" "+s1.m2+" "+s1.m3);
		System.out.println("s2 : "+s2.roll+"\t"+s2.m1+" "+s2.m2+" "+s2.m3);
	}
}
