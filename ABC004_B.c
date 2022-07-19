#include <stdio.h>

int main(){
	char s[4][4];
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			scanf("%c ",&s[3-i][3-j]);
		}
	}

	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("%c ",s[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}