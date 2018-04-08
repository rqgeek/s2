class Shape{
	void  area(int b,int h){
		System.out.println("Area of triangle = "+0.5*b*h);
	}
	void area(int a){
		System.out.println("Area of square = "+a*a);
	}
	void area(float pi,int r){
		System.out.println("Area of circle = "+pi*r*r);
	}
}
class Area10{
	public static void main(String args[]){
		Shape obj=new Shape();
		obj.area(10,5);
		obj.area(5);
		obj.area(3.14f,12);
	}
}
