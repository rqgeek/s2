#include<stdio.h>
 struct poly
 {
         int coeff;
         int expo;
 };
 struct poly p1[10],p2[10],p3[10],p4[10];
 int readPoly(struct poly []);
 int addPoly(struct poly [],struct poly [],int ,int ,struct poly []);
 int subPoly(struct poly [],struct poly [],int ,int ,struct poly []);
 void display1Poly( struct poly [],int terms);
 void displayPoly( struct poly [],int terms);
 
int main()
 {
        int t4,t1,t2,t3;
        t1=readPoly(p1);
        t2=readPoly(p2);
        t3=addPoly(p1,p2,t1,t2,p3);
        t4=subPoly(p1,p2,t1,t2,p4);
        printf(" \n\n Result of Subtraction is : ");
	displayPoly(p4,t4);
	printf(" \n\n Result of Addition is : ");
	display1Poly(p3,t3);
        printf("\n");
        return 0;
 }
 int readPoly(struct poly p[10])
 {
        int n,i;
        printf("\n\n Enter The Number Of Terms Polynomial:");
        scanf("%d",&n);
        printf("\n Enter the COEFFICIENT and EXPONENT in DESCENDING ORDER\n");
        for(i=0;i<n;i++)
        {
                printf("   Enter The Coefficient(%d): ",i+1);
                scanf("%d",&p[i].coeff);
                printf("      Enter The Exponent(%d): ",i+1);
                scanf("%d",&p[i].expo);
        }
        return(n);
 }

int addPoly(struct poly p1[10],struct poly p2[10],int t1,int t2,struct poly p3[10])
 {
        int i,j,k;
        i=j=k=0;
        while(i<t1 && j<t2)
        {
                if(p1[i].expo==p2[j].expo)
                {
                        p3[k].coeff=p1[i].coeff + p2[j].coeff;
                        p3[k].expo=p1[i].expo;

                        i++;
                        j++;
                        k++;
                }
                else if(p1[i].expo>p2[j].expo)
                {
                        p3[k].coeff=p1[i].coeff;
                        p3[k].expo=p1[i].expo;
                        i++;
                        k++;
                }
                else
                {
                        p3[k].coeff=p2[j].coeff;
                        p3[k].expo=p2[j].expo;
                        j++;
                        k++;
             }
        }

        while(i<t1)
        {
                p3[k].coeff=p1[i].coeff;
                p3[k].expo=p1[i].expo;
                i++;
                k++;
        }
        while(j<t2)
        {
                p3[k].coeff=p2[j].coeff;
                p3[k].expo=p2[j].expo;
                j++;
                k++;
        }
        return(k);
 }
int subPoly(struct poly p1[10],struct poly p2[10],int t1,int t2,struct poly p3[10])
 {
        int i,j,k;
        i=0;j=0;k=0;
        while(i<t1 && j<t2)
        {
                if(p1[i].expo==p2[j].expo)
                {
                        p4[k].coeff=p1[i].coeff - p2[j].coeff;
                        p4[k].expo=p1[i].expo;

                        i++;
                        j++;
                        k++;
                }
                else if(p1[i].expo>p2[j].expo)
                {
                        p4[k].coeff=p1[i].coeff;
                        p4[k].expo=p1[i].expo;
                        i++;
                        k++;
                }
                else
                {
                        p4[k].coeff=p2[j].coeff;
                        p4[k].expo=p2[j].expo;
                        j++;
                        k++;
            }
        }

        while(i<t1)
        {
                p4[k].coeff=p1[i].coeff;
                p4[k].expo=p1[i].expo;
                i++;
                k++;
        }
        while(j<t2)
        {
                p4[k].coeff=p2[j].coeff;
                p4[k].expo=p2[j].expo;
                j++;
                k++;
        }
        return(k);
 }

void displayPoly(struct poly p[10],int term)
 {
        int k;
        for(k=0;k<term-1;k++)
        printf("%d(x^%d)+",p[k].coeff,p[k].expo);
        printf("%d(x^%d)",p[term-1].coeff,p[term-1].expo);
}

void display1Poly(struct poly p[10],int term)
 {
        int k;
        for(k=0;k<term-1;k++)
        printf("%d(x^%d)+",p[k].coeff,p[k].expo);
        printf("%d(x^%d)",p[term-1].coeff,p[term-1].expo);
}

