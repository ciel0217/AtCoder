#include <stdio.h>
#include <stdlib.h>
#define min(c,d) c>d?d:c
int main(){
	int a,b;
	int min;
	scanf("%d%d",&a,&b);
	min=a;
	if(min>b)min=b;
	if(abs(a-b)%2==0){
		printf("%d\n",(abs(a-b)/2+min));
		return 0;
	}
	printf("IMPOSSIBLE\n");
	return 0;
}