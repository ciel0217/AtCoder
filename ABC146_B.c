#include <stdio.h>
#include <string.h>
int main(){
	int n;
	char s[10001];
	scanf("%d%s",&n,s);
	for(int i=0;i<strlen(s);i++){
		printf("%c",(s[i]+n-'A')%('Z'-'A'+1)+'A');
	}
	return 0;
}