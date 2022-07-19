#include <stdio.h>
#include <string.h>

int main(){
	char s[256];
	scanf("%s",s);
	for(int i=0;i<strlen(s);i++){
		if(s[i]=='a' || s[i]=='i' || s[i]=='u'||s[i]=='e' || s[i]=='o');
		else printf("%c",s[i]);
	}
	printf("\n");
	return 0;
}