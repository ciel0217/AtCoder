#include <stdio.h>

int main(){
	int N,K;
	scanf("%d%d",&N,&K);
	if(K==1)printf("0\n");
	else printf("%d\n",(N-K));
	return 0;
}