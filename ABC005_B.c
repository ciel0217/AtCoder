#include <stdio.h>

int main(){
	int n,ans=10000;
	scanf("%d",&n);
	int t;
	for(int i=0;i<n;i++){
		scanf("%d",&t);
		if(ans>t)ans=t;
	}
	printf("%d\n",ans);
	return 0;
}