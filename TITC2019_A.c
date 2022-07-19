#include <stdio.h>

int main(){
	int a,b,t;
	scanf("%d%d%d",&a,&b,&t);
	for(int i=b;i<=5000;i+=(b-a)){
		if(i>=t){
			printf("%d\n",i);
			break;
		}
	}
	return 0;
}