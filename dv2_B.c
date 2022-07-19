#include <stdio.h>
int main(){
	int N,min=10000000;
	scanf("%d",&N);
	long long int x[N];
	long long int y[N];
	for(int i=0;i<N;i++){
		scanf("%lld%lld",&x[i],&y[i]);
	}
 
	for(int p=N-1;p>0;p--){
		int count=0;
		long long int a=x[p]-x[p-1];
		long long int b=y[p]-y[p-1];
		if(a==0&&b==0)continue;
		for(int i=N-1;i>0;i--){
			if(x[i]-x[i-1]==a && y[i]-y[i-1]==b);
			else{
				count++;
			}
		}
		if(min>count)min=count;
	}
	if(N==1)min=0;
	printf("%d\n",min+1);
	return 0;	
}