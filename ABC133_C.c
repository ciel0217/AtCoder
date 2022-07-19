#include <stdio.h>
#include <stdlib.h>
typedef long long ll;
int main(){
	ll  L,R;
	scanf("%lld%lld",&L,&R);
	for(ll i=L;i<=R;i++){
		if(i%2019==0){
			printf("0\n");
			return 0;
		}
	}
	printf("%lld\n",(L*(L+1))%2019);
	return 0;
}