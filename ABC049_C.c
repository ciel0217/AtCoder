#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char T[][8] = {"dream","dreamer","erase","eraser"};
	char *S;
	S = (char*)malloc(sizeof(char));
	scanf("%s",S);
	int num = strlen(S);
	int count=0;

	while(num != 0){
		if(S[num-7] == 'd' && S[num-6] == 'r' && S[num-5]=='e' && S[num-4]=='a' && S[num-3] == 'm' && S[num-2]=='e' && S[num-1]=='r'){
			num-=7;
		}else if(S[num-5] == 'd' && S[num-4] == 'r' && S[num-3]=='e' && S[num-2]=='a' && S[num-1] == 'm'){
			num-=5;
		}else if(S[num-5]=='e'&&S[num-4]=='r'&&S[num-3]=='a'&&S[num-2]&&S[num-1]=='e'){
			num-=5;
		}else if(S[num-6]=='e'&&S[num-5]=='r'&&S[num-4]=='a'&&S[num-3]&&S[num-2]=='e'&&S[num-1]=='r'){
			num-=6;
		}else{
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n");
	return 0;
}