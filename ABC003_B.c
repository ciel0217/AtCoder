#include <stdio.h>
#include <string.h>
int main(){
	int count=0;
	char s[256],t[256];
	scanf("%s%s",s,t);

	for(int i=0;i<strlen(s);i++){
		if(s[i]==t[i])count++;
		else if(s[i]=='@'){
			if(t[i]=='a'||t[i]=='t' || t[i]=='c'||t[i]=='o'||t[i]=='d'||t[i]=='e' || t[i]=='r')count++;
		}
		else if(t[i]=='@'){
			if(s[i]=='a'||s[i]=='t' || s[i]=='c'||s[i]=='o'||s[i]=='d'||s[i]=='e' || s[i]=='r')count++;
		}
	}
	if(count==strlen(s))printf("You can win\n");
	else printf("You will lose\n");
	return 0;
}