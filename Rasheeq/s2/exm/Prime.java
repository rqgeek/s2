class Prime{
	public static void main(String args[]){
		int num[]=new int[100],sum=0;
		float avg=0;
		int n=args.length;
		for(int i=0;i<n;i++){
			num[i]=Integer.parseInt(args[i]);
		}
		//Display numbers
		System.out.print("The read numbers are:\t");
		for(int i=0;i<n;i++){
			System.out.print(num[i]+"  ");
		}
		System.out.println();
		//Find average
		for(int i=0;i<n;i++){
			sum+=num[i];
		}
		avg=sum/n;
		//Dsiplay avergae
		System.out.println("\n\tAverage = "+avg);
		//Check prime or not
		System.out.println("\n*****Prime or not*****");
		for(int i=0;i<n;i++){
			int j=0;
			for(j=2;j<num[i];j++){
				if(num[i]%j==0){
					break;
				}
			}
			if(j==num[i]||num[i]<=2){
				System.out.println("\t"+num[i]+":Prime");
			}else{
				System.out.println("\t"+num[i]+":Not prime");
			}
		}
		System.out.println("**********************");
	}
}
