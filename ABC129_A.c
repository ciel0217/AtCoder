#include <stdio.h>

int main(){
	int p,q,r,num;
	scanf("%d%d%d",&p,&q,&r);
	num=p+q;
	if(num>q+r)num=q+r;
	if(num>r+p)num=r+p;

	printf("%d\n",num);
	return 0;
}