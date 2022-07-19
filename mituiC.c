#include <stdio.h>

int main(){
	int dp[100001];
	int x;
	scanf("%d",&x);	
	dp[0]=1;	
	for(int i=100;i<=x;i++){
		if(dp[i-100] == 1 || dp[i-101]==1||dp[i-102]==1|| dp[i-103]==1||dp[i-104]==1||dp[i-105]==1)dp[i]=1;
		//else dp[i]=0;
	}
	if(dp[x]==1)printf("1\n");
	else printf("0\n");
	//printf("%d\n",dp[x]);
	return 0;
}