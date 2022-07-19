#include <stdio.h>
int a[8][8];
int dfs(int v,int n,int c[8]){
	int count=1;
	int ans=0;
	for(int i=0;i<n;i++){
		if(c[i]==0)
			count=0;
	}
	if(count)return 1;
	for(int i=0;i<n;i++){
		if(a[v][i]==0)continue;
		if(c[i]==1)continue;
		c[i]=1;
		printf("%d->%d\n",v,i);
		ans+=dfs(i,n,c);
		printf("ans=%d\n",ans);
		c[i]=0;
		printf("c[%d]=%d\n",i,c[i]);
	}
	return ans;
}

int main(){
	int N,M,A,B;
	scanf("%d%d",&N,&M);
	int check[N];

	for(int i=0;i<M;i++){
		scanf("%d%d",&A,&B);
		a[A-1][B-1]=a[B-1][A-1]=1;
	}
	for(int i=0;i<N;i++){
		check[i]=0;
	}
	check[0]=1;
	printf("%d\n",dfs(0,N,check));
	return 0;
}