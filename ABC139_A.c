#include <stdio.h>

int main(){
	char s[3],t[3];
	int count=0;

	scanf("%s",s);
	scanf("%s",t);

	for(int i=0;i<3;i++){
		//printf("%c",s[i]);
		if(s[i]==t[i])count++;
	}
	printf("%d\n",count);
	return 0;
}