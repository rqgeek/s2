class SimpleInterest{
	public static void main(String args[]){
		int amount,no_of_years;
		float rate_of_interest,interest;
		amount=Integer.parseInt(args[0]);
		no_of_years=Integer.parseInt(args[1]);
		rate_of_interest=Float.parseFloat(args[2]);
		interest=amount*no_of_years*rate_of_interest/100;
		System.out.println("****Simple Interest*****");
		System.out.println("Amount\t\t:"+amount);
		System.out.println("Years\t\t:"+no_of_years);
		System.out.println("Int.Rate\t:"+rate_of_interest*100+"%");
		System.out.println("Interest\t:"+interest);
		System.out.println("*************************");
	}
}
