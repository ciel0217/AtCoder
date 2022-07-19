#include <stdio.h>

int main(){
	int N,k;
	int num[110]={0};
	int count=0;

	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%d",&k);
		num[k]=1;
	}

	for(int i=0;i<110;i++){
		if(num[i] == 1)count++;
	}

	printf("%d\n",count);
	return 0;
}