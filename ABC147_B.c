#include <stdio.h>
#include <string.h>
int main(){
	char s[256];
	int count=0;
	scanf("%s",s);
	if(strlen(s)%2==1){
		for(int i=0;i<strlen(s)/2;i++){
			if(s[i]!=s[strlen(s)-1-i])count++;
		}
	}else{
		for(int i=0;i<strlen(s)/2;i++){
			if(s[i]!=s[strlen(s)-1-i])count++;
		}
	}
	printf("%d\n",count);
	return 0;
}