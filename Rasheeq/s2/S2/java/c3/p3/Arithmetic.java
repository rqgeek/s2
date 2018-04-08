import ARITHOP.Addition;
import ARITHOP.Subtraction;
import ARITHOP.Multiplication;
import ARITHOP.Division;
import java.util.*;
public class Arithmetic{
	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);
		int a,b;
		Addition ad=new Addition();
		Subtraction s=new Subtraction();
		Multiplication m=new Multiplication();
		Division d=new Division();
		System.out.println("Enter two numbers to find its SUM,DIFFERENCE,PRODUCT AND  QUOTIENT");
		System.out.print("Number 1 :");
		a=sc.nextInt();
		System.out.print("Number 2 :");
		b=sc.nextInt();
		System.out.println(a + " + " + b + " = "+ad.add(a,b));
		System.out.println(a + " - " + b + " = "+s.subtract(a,b));
		System.out.println(a + " x " + b + " = "+m.multiply(a,b));
		System.out.println(a + " / " + b + " = "+d.divide(a,b));
	}
}

