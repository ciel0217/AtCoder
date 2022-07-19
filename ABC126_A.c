#include <stdio.h>

int main(){
	char S[50],num;
	int N,K;
	scanf("%d%d",&N,&K);
	scanf("%s",S);
	num=S[K-1];
	switch(num){
		case 'A':
			S[K-1]='a';
			break;
		case 'B':
			S[K-1]='b';
			break;
		case 'C':
			S[K-1]='c';
			break;
		default:
			break;
	}	
	printf("%s\n",S);
	return 0;
}