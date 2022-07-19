#include <stdio.h>
#include <stdlib.h>

int main(){
	char s[50];
	int y,m,d;
	int y1=2019;
	int m1=4;
	int d1=30;
	scanf("%s",s);
	sscanf(s,"%d/%d/%d",&y,&m,&d);
	if((y>=y1) && (m>m1)){
		printf("BTD\n");
	}else{
		printf("Heisei\n");
	}
	return 0;
}