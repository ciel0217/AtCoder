#include <stdio.h>
#define max(x,y)x>y?x:y
int main(){
	int N,M,count=0;
	scanf("%d%d",&N,&M);
	int L[M],R[M],dp[M+1][N+1];
	for(int i=0;i<M;i++){
		scanf("%d%d",&L[i],&R[i]);
		dp[i+1][L[i]]=1;
		dp[i+1][R[i]]=1;
	}
	for(int i=0;i<=N;i++){
		dp[0][i]=0;
	}
	for(int i=0;i<M;i++){
		for(int j=L[i];j<=R[i];j++){
			if(j==L[i]||j==R[i]){
				dp[i+1][j]=max(dp[i][j]+1,dp[i+1][j]);
			}else{
			dp[i+1][j]=max(dp[i][j]+1,dp[i+1][j-1]);
		}
	}
	}
	for(int i=0;i<=N;i++){
		if(dp[M][i]==M)count++;
	}
	printf("%d\n",count);
	return 0;
}