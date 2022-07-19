#include <stdio.h>

int main(){
	int N,M,C;
	scanf("%d %d %d",&N,&M,&C);
	int num[N][M];
	int nm[M];
	int nn=0;
	int count=0;
	for(int i=0;i<M;i++){
		scanf("%d",&nm[i]);
	}

	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			scanf("%d",&num[i][j]);
		}
	}

	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
				nn+=num[i][j]*nm[j];
			}
			if((nn+C)>0){
				count++;
			}
			nn=0;
		}

		printf("%d\n",count);
		return 0;
	}