#include <stdio.h>

int main(){
	char S[5];
	scanf("%s",S);
	for(int i=0;i<3;i++){
		if(S[i]==S[i+1]){
			printf("Bad\n");return 0;
		}
    }
	printf("Good\n");
	return 0;
}