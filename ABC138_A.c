#include <stdio.h>

int main(){
	int a;
	char s[10];
	scanf("%d",&a);
	scanf("%s",s);
	if(a<3200)printf("red\n");
	else printf("%s\n",s);
	return 0;
}