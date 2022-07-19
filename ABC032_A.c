#include <stdio.h>

int main(){
	int a,b,n;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&n);
	for(int i=n;;){
		if(i%a==0 && i%b == 0){
			printf("%d\n",i);
			break;
		}
		i++;
	}
	return 0;
}