#include <stdio.h>
#include <math.h>

int main(){
	int A,n;
	scanf("%d%d",&A,&n);
	int a[n];
	int dp[n+1][A+1];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<=n;i++){
		for(int j=0;j<=A;j++){
			if(j==0)dp[i][j]=0;
			else dp[i][j]=100000;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<=A;j++){
			printf("比べる：dp[%d][%d]=%d\n比べる：dp[%d][%d]=%d\n",i+1,j,dp[i+1][j],i,j,dp[i][j]);
			dp[i+1][j]=fmin(dp[i+1][j],dp[i][j]);
			printf("dp[%d][%d]=%d\n",i+1,j,dp[i+1][j]);
			if(j>=a[i]){
				printf("%d>=%dのとき\n",j,a[i]);
				printf("比べる2：dp[%d][%d]=%d\n比べる2：dp[%d][%d]=%d+1\n",i+1,j,dp[i+1][j],i,(j-a[i]),dp[i][j-a[i]]);
				dp[i+1][j]=fmin(dp[i+1][j],dp[i][j-a[i]]+1);
				printf("dp[%d][%d]=%d\n",i+1,j,dp[i+1][j]);
			}
		}
	}
	if(dp[n][A]<100000)printf("%d\n",dp[n][A]);
	else printf("-1\n");
	return 0;
}