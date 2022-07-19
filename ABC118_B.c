#include <stdio.h>

int main(){
	int N,M,s;
	int K[10000];
	int k1[30];
	int count=0;
	scanf("%d %d",&N,&M);
		for(int i=1;i<=N;i++){
			scanf("%d",&K[i]);
				for(int j=1;j<=K[i];j++){
					scanf("%d",&s);
					k1[s]++;
				}
		}

		for(int i=1;i<=M;i++){
			if(k1[i]==N){
				count+=1;
			}
		}
	printf("%d",count);
	return 0;
}