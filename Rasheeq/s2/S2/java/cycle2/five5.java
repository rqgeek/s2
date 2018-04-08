class five5{
	public static void main(String args[]){
		String s=args[0];
		System.out.println("Substrings formed from "+s+" is");
		for(int i=0;i<5;i++){
			for(int j=0;j<5;j++){
				for(int k=0;k<5;k++){
					System.out.print(s.charAt(i));
					System.out.print(s.charAt(j));
					System.out.print(s.charAt(k)+"\t");
				}
			}
		}
	}
}






