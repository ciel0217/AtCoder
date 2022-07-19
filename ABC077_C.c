#include <stdio.h>
#include <stdlib.h>
int func(const void *a,const void *b){//昇順
	if(*((long long int *)a) > *((long long int *)b)){
		return 1;
	}else if(*((long long int *)a) == (*(long long int *)b)){
		return 0;
	}else{
		return -1;
	}
}

int main(){
	long long int ans=0,N;
	scanf("%lld",&N);
	long long int A[N],B[N],C[N];
	for(int i=0;i<N;i++){
		scanf("%lld",&A[i]);
	}
	for(int i=0;i<N;i++){
		scanf("%lld",&B[i]);
	}
	for(int i=0;i<N;i++){
		scanf("%lld",&C[i]);
	}
	qsort((void *)A,N,sizeof(long long int),func);
	qsort((void*)C,N,sizeof(long long int ),func);
	for(int i=0;i<N;i++){
		long long int left=-1,right=N;
		while(right-left>1){
			long long int harf=left+(right-left)/2;
			if(A[harf]>=B[i])right=harf;
			else left=harf;
		}
		long long int aleft=left+1;
		left=-1;
		right=N;
		while(right-left>1){
			long long int harf=left+(right-left)/2;
			if(C[harf]>B[i])right=harf;
			else left=harf;
		}
		long long int bright=N-right;
		ans+=(aleft*bright);
	}
	printf("%lld\n",ans);
	return 0;
}