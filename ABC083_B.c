#include <stdio.h>

int main(){
	int N,A,B;
	int sum=0;
	int count=0;

	scanf("%d %d %d",&N,&A,&B);

	for(int i=1;i<=N;i++){
		int n=i;
		sum=0;
		while(n>0){
			sum += n%10;
			n /= 10;
		}
		if(sum>=A && sum<=B){
			count+=i;
		}

	}
	printf("%d\n",count);
	return 0;
}