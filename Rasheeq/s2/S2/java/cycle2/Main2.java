import java.io.*;
class Student{
	int reg,m1,m2,m3,total;
	String name;
	Student(String n,int r,int s1,int s2,int s3){
		name=n;
		reg=r;
		m1=s1;
		m2=s2;
		m3=s3;
		if(!(m1<50||m2<50||m3<50)){
			total=m1+m2+m3;
		}else{
			total=0;
		}
	}
	void displayStudent(){
		System.out.println(name+"\t"+reg+"\t"+total);
	}
}
class FirstYear extends Read{
	String className,staff;
	int nStudents;
	Student s[];
	FirstYear(String name,String st,int n) throws IOException{
		className=name;
		nStudents=n;
		staff=st;
		s=new Student[n];
		for(int i=0;i<n;i++){
			s[i]=read();
		}
		System.out.println("Name\tReg.No\tTotalMark");
		for(int i=0;i<n;i++){
			s[i].displayStudent();
		}
	}
	Student bestStudent(){
		Student b=s[0];
		for(int i=1;i<nStudents;i++){
			if(b.total<s[i].total){
				b=s[i];
			}
		}
		return b;
	}
}
class Read{
	static Student read() throws IOException{
		Student o;
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		System.out.print("Name\t:");
		String name=br.readLine();
		System.out.print("Reg.No\t:");
		int reg=Integer.parseInt(br.readLine());
		System.out.print("Mark 1\t:");
		int m1=Integer.parseInt(br.readLine());
		System.out.print("Mark 2\t:");
		int m2=Integer.parseInt(br.readLine());
		System.out.print("Mark 3\t:");
		int m3=Integer.parseInt(br.readLine());
		o=new Student(name,reg,m1,m2,m3);
		return o;
	}
}
class Main2 extends Read{
	public static void main(String args[]) throws IOException{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		String cname,nstaff;
		int nstudents;
		Student s[]=new Student[3];
		for(int i=0;i<3;i++){
			System.out.println("Enter Student "+i+"\'s details");
			s[i]=read();	
		}
		System.out.println("Name\tReg.No\tTotalMark");
		for(int i=0;i<3;i++){
			s[i].displayStudent();
		}
		System.out.print("Enter Name of the Class (M.C.A,M.Sc,M.A etc):");
		cname=br.readLine();
		System.out.print("Enter Name of the staff:");
		nstaff=br.readLine();
		System.out.print("Enter Number of students in the class:");
		nstudents=Integer.parseInt(br.readLine());
		FirstYear f=new FirstYear(cname,nstaff,nstudents);
		Student bestStd;
		bestStd=f.bestStudent();
		System.out.println("BEST STUDENT IN FIRST YEAR");
		System.out.println("Name\tReg.No\tTotalMark");
		bestStd.displayStudent();
	}
}
