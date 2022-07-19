#include <stdio.h>
#include <math.h>
int main(){
	int  n,x;
	scanf("%d",&n);
	if(n*100%108 != 0){
		if( ((n*100/108+1)*108)/100 <= n)printf("%d\n",(n*100/108+1));
		else printf(":(\n");
	}else{
		printf("%d\n",n*100/108);
	}
	return 0;
}