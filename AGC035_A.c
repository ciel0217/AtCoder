#include <stdio.h>
#include <stdlib.h>
int main(){
	long long int N;
	scanf("%lld",&N);
	long long int a[N];
	for(int i=0;i<N;i++){
		scanf("%lld",&a[i]);
	}
	for(int i=0;i<N-1;i++){
		if((a[i+1]^a[N-1-i])==a[i] && (a[N-2-i]^a[i])==a[N-1]){
		printf("Yes\n");
		return 0;
		}
	}
	printf("No\n");
	return 0;
}