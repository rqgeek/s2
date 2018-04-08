#include<stdio.h>
main(){
	int a=0, b=1, s=0;
	while(s<100){
		printf("%d, ", s);
		a = b;
		b = s;
		s = a + b;
	}
	return 0;
}
