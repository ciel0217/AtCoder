#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	int N,M,K;
	int *A,*B;
	int maxA=0;
	int maxB=0;
	scanf("%d,%d,%d",&N,&M,&K);
	A = (int *)malloc(sizeof(int)*N);
	B = (int *)malloc(sizeof(int)*M);
	for(int i=1;i<=N;i++){
		scanf("%d",&A[i]);
	}

	for(int i=1;i<=M;i++){
		scanf("%d",&B[i]);
	}

	for(int i=1;i<=N;i++){
		maxA+=A[i]*pow(K,N-i);
	}

	for(int i=1;i<=M;i++){
		maxB+=B[i]*pow(K,N-i);
	}
	if(maxA<maxB){
		printf("x\n");
	}else if(maxB<maxA){
		printf("y\n");
	}else if(maxB==maxA){
		printf("Same\n");
	}

	free(A);
	free(B);
	return 0;
}