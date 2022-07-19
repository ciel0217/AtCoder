#include <stdio.h>
#include <string.h>

int main(){
	char S[100000];
	int len;
	int count=0;
	scanf("%s",S);
	len = strlen(S);

	if(S[0] == '1'){
		for(int i=0;i<len;i++){
			if(i%2==0 && S[i] != '1'){
				count++;
			}else if(i%2==1 && S[i] != '0'){
				count++;
			}
		}
	}else if(S[0] == '0'){
		for(int i=0;i<len;i++){
			if(i%2==0 && S[i] != '0'){
				count++;
			}else if(i%2==1 && S[i] != '1'){
				count++;
			}
		}

	}

	printf("%d\n",count);
	return 0;
}