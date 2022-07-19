#include <stdio.h>

int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	long long int dp[k+2],kai,tmp=1,tmp2=1;
	for(int i=n;i>=k;i--){
		tmp*=i;
	}
	for(int i=k;i>=1;i--){
		tmp2*=i;
	}
	kai=tmp/tmp2;
	dp[0]=0;
	dp[1]=n-k+1;
	for(int i=2;i<=k;i++){
		tmp=1;
		tmp2=1;
		for(int j=n-i+1;j>(n-i+1-i);j--){
			tmp*=j;
		}
		for(int j=i;j>=1;j--){
			tmp2*=j;
		}
		dp[i]=(tmp/tmp2)%1000000007;
	}

	for(int i=1;i<=k;i++){
		printf("%lld\n",dp[i]);
	}
	return 0;
}