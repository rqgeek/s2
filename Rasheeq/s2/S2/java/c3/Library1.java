import java.io.*;
class Publications{
	BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
	String publisher,title;
	int numPages,price;
	void setDetails() throws IOException{
		System.out.print("Publisher\t: ");
		publisher=br.readLine();
		System.out.print("Title\t\t: ");
		title=br.readLine();
		System.out.print("Number of pages\t: ");
		numPages=Integer.parseInt(br.readLine());
		System.out.print("Price\t\t: ");
		price=Integer.parseInt(br.readLine());
	}
	void disp1(){
	System.out.print(title+"\t\t"+publisher+"\t"+numPages+"\t"+price+"\t");
	}
}
class Magazine extends Publications{
	String pUnit;
	void setUnit(String p){
		pUnit=p;
	}
	void disp2(){
		System.out.println(pUnit);
	}
}
class Book extends Publications{
	String author;
	void setAuthor(String a){
		author=a;
	}
	void disp2(){
	System.out.println(author);
	}
}
class kidsMagazine extends Magazine{
	int ageRange;
	void setAge(int r){
		ageRange=r;
	}
	void disp2(){
	System.out.println(ageRange);
	}
}
class Library1{
	static BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
	public static void main(String args[]){
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int nM=1,nB=1,nkM=1;
		Magazine m=new Magazine();
		Book b=new Book();
		kidsMagazine k=new kidsMagazine();
		Magazine mz[];
		Book bk[];
		kidsMagazine km[];
		try{
			System.out.print("Enter the number of Magazines\t: ");
			nM=Integer.parseInt(br.readLine());
			System.out.print("Enter the number of Books\t: ");
			nB=Integer.parseInt(br.readLine());
			System.out.print("Enter the number of Kids Magazines\t: ");
			nkM=Integer.parseInt(br.readLine());
			mz=new Magazine[nM];
			bk=new Book[nB];
			km=new kidsMagazine[nkM];
			System.out.println("\fEnter Magazine details");
			for(int i=0;i<nM;i++){
				System.out.println("Magazine "+(i+1)+" : ");
				mz[i]=magazineData();
			}
			System.out.println("Enter Book details");
			for(int i=0;i<nB;i++){
				System.out.println("Book "+(i+1)+" : ");
				bk[i]=bookData();
			}
			System.out.println("Enter Kids Magazine details");
			for(int i=0;i<nkM;i++){
				System.out.println("Kids Magazine "+(i+1)+" : ");
				km[i]=kidsMagazineData();
			}
			for(int i=0;i<nM;i++){
				for(int j=0;j<nM-1;j++){
					if(mz[j].title.compareTo(mz[j+1].title)>0){
						m=mz[j+1];
						mz[j+1]=mz[j];
						mz[j]=m;
					}
				}
			}
			for(int i=0;i<nB;i++){
				for(int j=0;j<nB-1;j++){
					if(bk[j].title.compareTo(bk[j+1].title)>0){
						b=bk[j+1];
						bk[j+1]=bk[j];
						bk[j]=b;
					}
				}
			}
			for(int i=0;i<nkM;i++){
				for(int j=0;j<nkM-1;j++){
					if(km[j].title.compareTo(km[j+1].title)>0){
						k=km[j+1];
						km[j+1]=km[j];
						km[j]=k;
					}
				}
			}
			System.out.println("\t\t***Magazine***");
			System.out.println("Title\tPublisher\tNumPages\tPrice\tPublicationUnit");
			for(int i=0;i<nM;i++){
				mz[i].disp1();
				mz[i].disp2();
			}
			System.out.println("\t\t***Book***");
			System.out.println("Title\tPublisher\tNumPages\tPrice\tAuthor");
			for(int i=0;i<nB;i++){
				bk[i].disp1();
				bk[i].disp2();
			}
			System.out.println("\t\t***Kids Magazine***");
			System.out.println("Title\tPublisher\tNumPages\tPrice\tAgeRange");
			for(int i=0;i<nkM;i++){
				km[i].disp1();
				km[i].disp2();
			}
		}catch(Exception e){
			System.out.println("Error : "+e.toString());
		}
	}
	static Magazine magazineData()throws IOException{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		Magazine m=new Magazine();
		try{
			m.setDetails();
		}catch(Exception e){}
		System.out.print("Publication unit\t: ");
		m.setUnit(br.readLine());
		return m;
	}
	static Book bookData() throws IOException{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		Book b=new Book();
		try{
			b.setDetails();
		}catch(Exception e){}
		System.out.print("Author\t\t: ");
		b.setAuthor(br.readLine());
		return b;
	}
	static kidsMagazine kidsMagazineData() throws IOException{
		kidsMagazine k=new kidsMagazine();
		try{
			k.setDetails();
		}catch(Exception e){}
		System.out.print("Age range\t: ");
		k.setAge(Integer.parseInt(br.readLine()));
		return k;
	}
}


