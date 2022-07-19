#include <stdio.h>

int main(){
	int  n,count=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(i%2==1)count++;
	}
	printf("%lf",(double)count/(double)n);
	return 0;
}