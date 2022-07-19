#include <stdio.h>
#include <string.h>

int main(){
	char S[200000];
	scanf("%s",S);
	int st=strlen(S);
	int flag=1,count=0;;
	while(flag){
		flag=0;
		for(int i=0;i<st;i++){
			if(S[i]=='A' && i+2<st){
				if(S[i+1]=='B'){
					if(S[i+2]=='C'){
						flag=1;
						S[i+2]='A';
						S[i+1]='C';
						S[i]='B';
						count++;
						break;
					}
				}
			}
		}
	}
	printf("%d\n",count);
	return 0;
}