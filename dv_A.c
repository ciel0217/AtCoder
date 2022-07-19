#include <stdio.h>

int main(){
	int N,K,flag=0,count=0;
	scanf("%d%d",&N,&K);
	int num[N];
	for(int i=0;i<N;i++){
		for(int j=0;j<K;j++){
			if(i+j>N-1)flag=1;
		}
		if(flag==0)count++;
		else break;
	}
	printf("%d\n",count);
	return 0;
}