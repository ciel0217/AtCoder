#include <stdio.h>

int main(){
	char s[101];
	int i,count=0;
	scanf("%s",s);
	for(i=0;i<101;i++){
		if(i%2==0 && (s[i]=='R' || s[i]=='U' || s[i]=='D'))count++;
		if(i%2==1 &&(s[i]=='L' || s[i]=='U' || s[i]=='D'))count++;
		if(s[i]=='\0')break;
	}
	if(i==count)printf("Yes\n");
	else printf("No\n");
	return 0;
}