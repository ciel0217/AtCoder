#include <stdio.h>
#define m 10000000007
typedef long long int ll; 
ll count=0,n,k,max=0,count2=0;
ll kai(ll p){
	if(p==0)return 0;
	else{
		count2+=p;
		count2=count2%m;
	}
	return kai(p-count%m);
}
int main(){
	scanf("%lld%lld",&n,&k);
	ll a[n];
	for(int i=0;i<n;i++)scanf("%lld",&a[i]);

	for(int i=0;i<n;i++){
		for(int j=n-1;j>i;j--){
			if(a[i]>a[j])count++;
		}
	}

	count2=count*k;
	//printf("%lld\n",count);
	count2=count2%m;
	kai(count2-count);
	printf("%lld\n",count2);
	return 0;
}