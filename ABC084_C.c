#include <stdio.h>
 
int main(){
	long long int N,sum;
	scanf("%lld",&N);
	long long int S[N+1],C[N+1],F[N+1];
	if(N==1){
		printf("0\n");
		return 0;
	}
	for(int i=1;i<N;i++){
		scanf("%lld%lld%lld",&C[i],&S[i],&F[i]);
	}
	C[N]=S[N]=F[N]=0;
	for(int i=1;i<N;i++){
		sum = S[i]+C[i];
		for(int j=i+1;j<N;j++){
			if(sum<S[j]){
				sum=S[j];
			}else if(sum%F[j]!=0){
				sum=sum+F[j]-(sum%F[j]);
			
			sum+=C[j];
		}
		printf("%lld\n",sum);
	}
	printf("0\n");
	return 0;
}