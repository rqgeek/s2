import java.util.*;
import java.io.*;
class Elective3{
	static Scanner s=new Scanner(System.in);
	public static void main(String args[])throws Exception{
		String name,elective;
		char n[]=new char[30];
		char e[]=new char[30];
		File fe=new File("electivelist.txt");
		FileWriter fw=new FileWriter(fe);
		int nu;
		System.out.print("Enter the number of students : ");
		nu=s.nextInt();
		System.out.println("Enter student Details:-");
		for(int i=0;i<nu;i++){
			System.out.print("Student "+(i+1)+" - Name : ");
			name=s.next();
			System.out.print("\t - Elective : ");
			elective=s.next();
			name.getChars(0,name.length(),n,0);
			elective.getChars(0,elective.length(),e,0);
			fw.write(n);
			fw.write((byte)'-');
			fw.write(e);
			fw.write((byte)'#');
			fw.write((byte)'\n');
		}
		fw.close();
		FileReader fr=new FileReader(fe);
		char ch;
		String line;
		char buf[]=new char[30];
		BufferedReader br=new BufferedReader(fr);
		System.out.println("Details are stored into \"electivelist.txt\"");
		while((line=br.readLine())!=null){
			String nam=line.substring(0,line.indexOf('-'));
			String ele=line.substring(line.indexOf('-')+1,line.length()-1);
			System.out.println("name "+nam);
			System.out.println("size "+nam.length());
			System.out.println("e "+ele);
			System.out.println("size "+ele.length());
			File nf=new File(nam);
			FileWriter nfw=new FileWriter(nf,true);
			nam.getChars(0,nam.length(),buf,0);
			nfw.write(buf);
			nfw.close();
		}
		System.out.println("The students are sorted by electives and store in respective files");
	}
}
