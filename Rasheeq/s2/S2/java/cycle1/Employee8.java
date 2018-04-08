import java.util.*;
class Employee{
	Scanner s2=new Scanner(System.in);
	String firstname,lastname;
	double salary;
	Employee(){
		firstname="";
		lastname="";
		salary=0;
	}
	String getfname(){
		return firstname;
	}
	String getlname(){
		return lastname;
	}
	double getsalary(){
		return salary;
	}
	void setfname(String name){
		firstname=name;
	}
	void setlname(String name){
		lastname=name;
	}
	void setsalary(double s){
		salary=s;
	}
}
class Employee8{
	public static void main(String args[]){
		Employee e1=new Employee();
		Employee e2=new Employee();
		System.out.println("Enter employee 1's details:");
		set(e1);
		System.out.println("Enter employee 2's details:");
		set(e2);
		System.out.println("\bFirstName\tLastName\tMonthlySalary\tYearlySalary");
		System.out.println("____________________________________________________________");
		display(e1);
		display(e2);
	}
	static void set(Employee o){
		Scanner s=new Scanner(System.in);
		String lname;
		String fname;
		double salary;
		System.out.print("\tfirst name\t: ");
		fname=s.next();
		System.out.print("\tLast name\t: ");
		lname=s.next();
		System.out.print("\tMonthly salary\t: ");
		salary=s.nextDouble();
		o.setfname(fname);
		o.setlname(lname);
		o.setsalary(salary);
	}
	static void display(Employee o){
		System.out.println(o.getfname()+"\t\t"+o.getlname()+"\t\t"+o.getsalary()+"\t\t"+o.getsalary()*12);
	}
}
