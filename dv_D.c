#include <stdio.h>

int main(){
	long long int N,ans=0;
	scanf("%lld",&N);
	if(N%2==0){
		for(long long int i=3;i<=N/2;i++){
			long long int num1=N/i;
			long long int num2=N%i;
			if(num1==num2)ans+=i;
			i++;
		}
	}else{
		for(long long int i=2;i<=N/2;i++){
			long long int num1=N/i;
			long long int num2=N%i;
			if(num1==num2)ans+=i;
		}
		i++;
	}
	printf("%lld\n",ans+(N-1));
	return 0;
}