#include <stdio.h>

int main(){
	long long int N,M;
	scanf("%lld%lld",&N,&M);
	if(N==1 && M==1){
		printf("1\n");
	}else if(N==1 && M>1){
		printf("%lld\n",M-2);
	}else if(N>1 && M==1){
		printf("%lld",N-2);
	}else{
		printf("%lld\n",(M-2)*(N-2));
	}
	return 0;
}