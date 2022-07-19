#include <stdio.h>

int main(){
	int n,b;
	scanf("%d%d",&n,&b);
	if(n>=13){
		printf("%d\n",b);
	}else if(6<=n && n<=12){
		printf("%d\n",b/2);
	}else{
		printf("0\n");
	}
	return 0;
}