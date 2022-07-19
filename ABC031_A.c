#include <stdio.h>

int main(){
	int A,D;
	scanf("%d%d",&A,&D);
	if(A>D)D++;
	else A++;
	printf("%d\n",A*D);
	return 0;
}