class StringBuf6{
	public static void main(String args[]){
		StringBuffer bf=new StringBuffer("This is string buffer's string");
		System.out.println("String buffer content :"+bf);
		System.out.println("Capacity\t:"+bf.capacity());
		System.out.println("Length\t:"+bf.length());
		System.out.println("Reverse\t:"+bf.reverse());
		bf.reverse();
		System.out.println("Substring\t:"+bf.substring(9));
		bf.delete(0,15);
		System.out.println("Deleted 0-15\t:"+bf); 
	}
}
