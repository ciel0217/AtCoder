#include <stdio.h>

int main(){
	int m1,m2,d1,d2;
	scanf("%d%d%d%d",&m1,&d1,&m2,&d2);
	if(m2-m1 == 1)printf("1\n");
	else printf("0\n");
	return 0;
}