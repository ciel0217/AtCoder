#include <stdio.h>
#include <string.h>
int main(){
	char s[10];
	char a[10]="Sunny",b[10]="Cloudy",c[10]="Rainy";
	scanf("%s",s);
	if(strcmp(s,a)==0)printf("Cloudy\n");
	else if(strcmp(s,b)==0)printf("Rainy\n");
	else printf("Sunny\n");
	return 0;
}