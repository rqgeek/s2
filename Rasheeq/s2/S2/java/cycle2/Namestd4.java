import java.io.*;
class Namestd4{
	public static void main(String args[]){
		String name[]=new String[10],temp;
		int j=0;
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter the names 10 students");
		try{
			for(int i=0;i<10;i++){
				System.out.print("Student "+(i+1)+" : ");
				name[i]=br.readLine();
				name[i]=name[i].toUpperCase();
			}
		}catch(Exception e){}
		System.out.println("NAMES IN ALPHABETICAL ORDER");
		for(int i=0;i<10;i++){
			for(j=0;j<10;j++){
				if(name[i].compareTo(name[j])<0){
					temp=name[j];
					name[j]=name[i];
					name[i]=temp;
				}
			}
		}
		for(int i=0;i<10;i++){
			System.out.println((i+1)+" : "+name[i]);
		}
		System.out.println("NAMES THAT STARTS WITH \"AN\"");
		j=1;
		for(int i=0;i<10;i++){
			if(name[i].startsWith("AN")){
				System.out.println(j+" : "+name[i]);
				j++;
			}
		}
		System.out.println("NAMES THAT ENDS WITH \"SH\"");
		j=1;
		for(int i=0;i<10;i++){
			if(name[i].endsWith("SH")){
				System.out.println(j+" : "+name[i]);
				j++;
			}
		}		
	}
}
