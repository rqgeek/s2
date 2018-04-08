#include<stdio.h>
void read(int a[100][3],int n){
	printf("Enter the limit of the  sparse matrix %d\n",n);
	for(int i=0;i<3;i++){
		scanf("%d",&a[0][i]);
	}
	printf("enter the elements");
	for(int i=1;i<a[0][2]+1;i++){
		for(int j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
}
void print(int a[100][3]){
	for(int i=0;i<a[0][2]+1;i++){
		printf("\t|");
		for(int j=0;j<3;j++){
			printf("%4d",a[i][j]);
		}
		printf("|  \n");
	}
}
void process(int a[][3],int b[][3],int c[][3],int d[][3]){
	if(a[0][0]!=b[0][0]||a[0][1]!=b[0][1]){
		printf("This matrix operation cannot be done\n");
	}else{
		int n=1,m=1,p=1,t=0;
		c[0][0]=a[0][0];
		c[0][1]=a[0][1];
		d[0][0]=a[0][0];
                d[0][1]=a[0][1];
		while(n<=a[0][2]&&m<=b[0][2]){
			if(a[n][0]==b[m][0]&&a[n][1]==b[m][1]){
				for(int i=0;i<2;i++){
					c[p][i]=a[n][i];
					d[p][i]=a[n][i];
				}
				c[p][2]=a[n][2]+b[m][2];
                                d[p][2]=a[n][2]-b[m][2];
				p++;n++;t++;m++;
			}
			else if(a[n][0]==b[m][0]&&a[n][1]<b[m][1]){
				for(int i=0;i<3;i++){
                                	c[p][i]=a[n][i];
                                	d[p][i]=a[n][i];
				}
                                p++;n++;t++;
			}
			else if(a[n][0]==b[m][0]&&a[n][1]>b[m][1]){
                                for(int i=0;i<3;i++){
					c[p][i]=b[m][i];
                                	d[p][i]=b[m][i];
				}
                                p++;m++;t++;
                        }
			else if(a[n][0]<b[m][0]){
                                for(int i=0;i<3;i++){
					c[p][i]=a[n][i];
                                	d[p][i]=a[n][i];
				}
                                p++;n++;t++;
                        }
			else{
				for(int i=0;i<3;i++){
                                	c[p][i]=b[m][i];
                                	d[p][i]=b[m][i];
                                }
                                p++;m++;t++;
                        }
		}
		while(n<=a[0][2]){
			for(int i=0;i<3;i++){
                		c[p][i]=a[n][i];
                        	d[p][i]=a[n][i];
                        }
                        p++;n++;t++;
                }
 		while(m<=b[0][2]){
			for(int i=0;i<3;i++){
                        	c[p][i]=b[m][i];
                        	d[p][i]=b[m][i];
                        }
                        p++;m++;t++;
                }
		c[0][2]=t;
		d[0][2]=t;
	}
}
void transpose(int s[][3],int d[][3]){
	int nr=s[0][0],nc=s[0][1],ne=s[0][2],row_terms[100],sp[100];
	int i,j;
        d[0][0]=nc;
        d[0][1]=nr;
        d[0][2]=ne;
        if(ne>0){
   		for(i=0; i<nc; i++)
                	row_terms[i]=0;
                for(i=1; i<=ne; i++)
                      	row_terms[s[i][1]]++;
                sp[0]=1;
                for(i=1; i<ne; i++)
                     	sp[i]=sp[i-1] + row_terms[i-1];
                for(i=1; i<=ne; i++){
                      	j = sp[s[i][1]]++;
                        d[j][0] = s[i][1];
                       	d[j][1] = s[i][0];
                        d[j][2] = s[i][2];
                }
        }
}
void main(){
	int s1[100][3],s2[100][3],sum[100][3],dif[100][3],tr[100][3];
	read(s1,1);
	read(s2,2);
	printf("Sparse Matrix 1 :\n");
	print(s1);
	printf("Sparse Matrix 2 :\n");
	print(s2);
	process(s1,s2,sum,dif);
	printf("Sum sparse matrix :\n");
	print(sum);
	printf("Difference of sparse matrix  :\n");
	print(dif);
	transpose(s1,tr);
	printf("Traspose of sparse matrix 1 is:\n");
	print(tr);
}
