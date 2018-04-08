class Smallest{
	public static void main(String args[]){
		int n1,n2,n3,smallest;
		n1=Integer.parseInt(args[0]);
		n2=Integer.parseInt(args[1]);
		n3=Integer.parseInt(args[2]);
		smallest=(n1<n2)?((n1<n3)?n1:n3):(n2<n3)?n2:n3;
		System.out.println("Smallest of the numbers : "+n1+","+n2+","+n3);
		System.out.println("Smallest = "+smallest);
	}
}
