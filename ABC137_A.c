#include <stdio.h>

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int max=a*b;
	if(max < a+b)max=a+b;
	if(max<a-b)max=a-b;
	printf("%d\n",max);
	return 0;
}