#include <stdio.h>

int main(){
	int N,t[100001],x[100001],y[100001];
	x[0]=t[0]=y[0]=0;
	scanf("%d",&N);
	for(int i=1;i<=N;i++){
		scanf("%d %d %d",&t[i],&x[i],&y[i]);
	}

	for(int i=1;i<=N;i++){
		int dt = t[i]-t[i-1];
		int dx = x[i]-x[i-1];
		int dy = y[i]-y[i-1];

		if(dx+dy > dt){
			printf("No\n");
			return 0;
		}else if((t[i]%2==1) && ((x[i]+y[i])%2!=1)){
			printf("No\n");
			return 0;
		}else if((t[i]%2==0) && ((x[i]+y[i])%2!=0)){
			printf("No\n");
			return 0;
		}
	}

	printf("Yes\n");
	return 0;
}