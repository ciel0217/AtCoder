#include <stdio.h>
#include <string.h>
int main(){
	char S[16];
	int count=0;
	scanf("%s",S);
	int k=strlen(S);
	for(int i=0;i<k;i++){
		if(S[i]=='o')count++;
	}

	if(15-k>=8-count)printf("YES\n");
	else printf("NO\n");
	return 0;
}