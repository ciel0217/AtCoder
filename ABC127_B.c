#include <stdio.h>

int main(){
	int r,D,x20;
	scanf("%d%d%d",&r,&D,&x20);
	int sum=x20;
	for(int i=0;i<10;i++){
		sum=r*sum-D;
		printf("%d\n",sum);
	}
	return 0;
}