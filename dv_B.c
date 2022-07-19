#include <stdio.h>

int main(){
	int R,G,B,N,sum,sumb,count=0;
	scanf("%d %d %d %d",&R,&G,&B,&N);
	for(int i=0;i<=N;i++){
		for(int j=0;j<=N;j++){
			sum=R*i+G*j;
			sumb=N-sum;
			if(N==sumb+sum && sumb%B==0 && sum>=0 && sumb>=0)count++;
		}
	}
	printf("%d\n",count);
	return 0;
}