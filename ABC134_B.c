#include <stdio.h>

int main(){
	int n,d;
	scanf("%d%d",&n,&d);
	int s=d*2+1;
	int count=0;
	if(n%s>=1)count++;
	printf("%d\n",n/s+count);
	return 0;
}