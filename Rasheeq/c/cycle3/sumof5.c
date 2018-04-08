#include<stdio.h>
main()
{
	int s1, s2, s3, s4, s5, sum;
	float perc;
	printf("Enter the marks of 5 subjects (Maximum 100)\n");
	scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);
	sum = s1 + s2 + s3  + s4 + s5;
	perc = (float)sum/500*100;
	printf("Sum\t:%d\nPercentage\t:%.2f\%\n", sum, perc);
	if(perc<40)
	{
		printf("Grade\t:F");
	}
	else if((perc>=40) && (perc<60))
	{	
		printf("Grade\t:C");	
	}
	else if((perc>60) && (perc<80))
	{
                printf("Grade\t:B");
	}    
    	else
		printf("Grade\t:A");
	printf("\n");
}
