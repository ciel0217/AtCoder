#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
	char s1[50],s2[50];
	int dp[50][50];
	scanf("%s",s1);
	scanf("%s",s2);
	int size1=strlen(s1);
	int size2=strlen(s2);
	for(int i=0;i<=size1;i++){
		dp[i][0]=i;
	}
	for(int j=0;j<=size2;j++){	
			dp[0][j]=j;
	}
	for(int i=1;i<=size1;i++){
		for(int j=1;j<=size2;j++){
			dp[i][j]=fmin(fmin(dp[i-1][j]+1,dp[i][j-1]+1),dp[i-1][j-1]+(s1[i-1]==s2[j-1]?0:1));
		}
	}
	printf("%d\n",dp[size1][size2]);
	return 0;
}