#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int N,i;
	scanf("%d",&N);
	int a[N+1],dp[N+1];
	for(i=0;i<N;i++){
		scanf("%d",&a[i]);
	}
	dp[0]=0;
	dp[1]=abs(a[1]-a[0]);
	for(i=2;i<N;i++){
		dp[i]=fmin(dp[i-1]+abs(a[i-1]-a[i]),dp[i-2]+abs(a[i-2]-a[i]));
	}
	printf("%d\n",dp[N-1]);
	return 0;
}