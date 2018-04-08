import java.util.*;
class Employee1{
	public static void main(String args[]){
		String name,department; int age,salary;
		Scanner s=new Scanner(System.in);
		System.out.println("\033[2J\033[1;1H\t***EMPLOYEE DETAILS***\n"); 
		System.out.println("Enter the details : -");
		System.out.println("Name\t\t: ");
		System.out.println("Department\t: ");
		System.out.println("Salary\t\t: ");
		System.out.println("Age\t\t: ");
		System.out.print("\033[4;19H");
		name=s.nextLine();
		System.out.print("\033[5;19H");
		department=s.next();
		System.out.print("\033[6;19H");
		salary=s.nextInt();
		System.out.print("\033[7;19H");
		age=s.nextInt();
		try{
			if(containsNumber(name)){
				throw new NameException();
			}else if(age>50){
				throw new AgeException();
			}else{
				System.out.println("\n\t=>GIVEN DETAILS ARE");
				System.out.println("Name\t\t: "+name);
				System.out.println("Department\t: "+department);
				System.out.println("Salary\t\t: "+salary);
				System.out.println("Age\t\t: "+age);
			}
		}
		catch(Exception e){
			System.out.println("Error! : "+e);
		}
	}
	static boolean containsNumber(String s){
		int i=0;
		for(i=0;i<=9;i++){
			String t=i+"";
			if(s.contains(i+"")){
				return true;
			}
		}
		return false;
	}
}
class NameException extends Exception{
	public String toString(){
		return "Name contains digits!";
	}
}
class AgeException extends Exception{
	public String toString(){
		return "Age exceeds the limit(50) Sorry :-)";
	}
}
