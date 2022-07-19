#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char *S;
	int count=0;
	int max=0;
	S = (char *)malloc(sizeof(char)*11);
	scanf("%s",S);
	for(int i=0;i<strlen(S);i++){
			if(S[i] == 'A' || S[i] == 'C' || S[i] == 'G' || S[i] == 'T'){
				count++;
				if(count>max){
					max=count;
				}
			}else{
				count=0;
			}
		}
	printf("%d\n",max);
	return 0;
}
