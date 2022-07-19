#include <stdio.h>

int main(){
	int A,B,C;
	scanf("%d %d %d",&A,&B,&C);
	if((B/A)>=C){
		printf("%d\n",C);
	}else{
		printf("%d\n",B/A);
	}
	return 0;
}