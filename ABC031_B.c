#include <stdio.h>

int main(){
	int L,H,N;
	scanf("%d%d",&L,&H);
	scanf("%d",&N);
	int run[N];
	for(int i=0;i<N;i++){
		scanf("%d",&run[i]);
	}

	for(int i=0;i<N;i++){
		if(run[i]<L){
			printf("%d\n",L-run[i]);
		}else if(H<run[i]){
			printf("-1\n");
		}else{
			printf("0\n");
		}
	}
	return 0;
}