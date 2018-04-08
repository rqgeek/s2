class Substr3{
	public static void main(String args[]){
		char c[];
		String s=args[0];
		int len=s.length();
		if(len<5){
			for(int i=len;i<5;i++){
				s=s+'x';
			}
			System.out.println("Value of string = "+s);
		}else{
			String rev="";
			for(int i=len-1;i>=0;i--){
				rev=rev+s.charAt(i);
			}
			System.out.println("Reverse of "+s+" = "+rev);
		}
	}
}



