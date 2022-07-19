#include <stdio.h>
#define max(a,b) (a>b?a:b)
int main(){
	int n,ans=0;
	scanf("%d",&n);
	int s[n];
	for(int i=0;i<n;i++){
		scanf("%d",&s[i]);
	}

	static int dp[101][10010];

	for(int i=0;i<101;i++)
		for(int j=0;j<10010;j++){
			dp[i][j]=0;
		}

	dp[0][0]=1;
	dp[0][s[0]]=1;
	for(int i=1;i<n;i++)
		for(int j=0;j<10000;j++){
			if(j>=s[i])dp[i][j]=max(dp[i-1][j],dp[i-1][j-s[i]]);
			if(j<s[i]) dp[i][j]=dp[i-1][j];
		}
	/*for(int i=1;i<=n;i++){
		for(int j=0;j<101;j++){
			printf("%d\t",dp[i][j]);
		}
		printf("\n");

	}
*/
	for(int i =10000;i>0;i--){
		if(dp[n-1][i]!=0 && i%10!=0){
			ans=i;
			break;
		}
	}
	printf("%d\n",ans);
	return 0;
}