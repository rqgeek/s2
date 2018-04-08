#include<stdio.h>
void main(){
	char color[7]={char v[10], i[1], b[9], g[8], y[9], o[9], r[8]};
	printf("Enter the colours in order of VIBGYOR\n");
	for(int i=0;i<7;i++){
		scanf("%s",color[i]);
	}
	for(int i=0;i<7;i++){
		printf("%s\t%d\n", color[i],sizeof(color[i]));
	}
}
