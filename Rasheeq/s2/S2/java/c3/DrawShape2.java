import java.io.*;
abstract class Shape{
	abstract void draw(int x, int y);
}
class Square extends Shape{
	public void draw(int x,int y){
		for(int i=0;i<x;i++){
			System.out.print("\t\t\t");
			for(int j=0;j<y;j++){
				System.out.print("* ");
			}
			System.out.println();
		}
	}
}
class RightTriangle extends Shape{
	public void draw(int x,int y){
		for(int i=0;i<x;i++){
			System.out.print("\t\t\t");
			for(int j=0;j<=i;j++){
				System.out.print("%");
			}
			System.out.println();
		}
	}
}
class Equilateral extends Shape{
	public void draw(int x,int y){
		for(int i=0;i<x;i++){
			System.out.print("\t\t\t");
			for(int j=x-1;j>i;j--){
				System.out.print(" ");
			}
			for(int k=0;k<=i;k++){
				System.out.print("# ");
			}
			System.out.println();
		}
	}
}
class DrawShape2{
	public static void main(String  args[]){
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int sx=0,rx=0,ry=0,ex=0;
		System.out.println("\033[2J\033[1;1H\t\t***D R A W	   SHAPES***");
		Square s=new Square();
		RightTriangle r=new RightTriangle();
		Equilateral e=new Equilateral();
		try{
			System.out.print("Enter number of characters of square:");
			sx=Integer.parseInt(br.readLine());
			System.out.print("Enter number of horizontal characters of Right Triangle:");
			rx=Integer.parseInt(br.readLine());
			System.out.print("Enter number of vertical characters of Right Triangle  :");
			ry=Integer.parseInt(br.readLine());
			System.out.print("Enter number of characters of Equilateral:");
			ex=Integer.parseInt(br.readLine());
			System.out.println("##Square");
			s.draw(sx,sx);
			System.out.println("##Right Triangle");
			r.draw(rx,ry);
			System.out.println("##Equilateral Triangle");
			e.draw(ex,ex);
		}catch(Exception E){}
	}
}
