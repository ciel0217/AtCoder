#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,l,min=10000,sum=0;
	scanf("%d%d",&n,&l);
	int apple[n];
	for(int i=0;i<n;i++){
		apple[i]=l+i;
		if(apple[i]==0)min=0;
	}

	for(int i=0;i<n;i++){
		sum+=apple[i];
	}
	for(int i=0;i<n;i++){
		if(min==0)break;
		if(min>sum-abs(sum-apple[i]))min=sum-(sum-apple[i]);
	}
	printf("%d\n",sum-min);
	return 0;
}