#include <stdio.h>

int main(){
	long long int X,Y,num,count=1;
	scanf("%lld%lld",&X,&Y);
	num=X;
	while(1){
		num = num*2;
		if(num>Y)break;
		count++;
	}
	printf("%d\n",count);
	return 0;
}