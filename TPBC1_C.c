#include <stdio.h>
#include <string.h>

int main(){
	int N,count1=0,count2=0;
	char S[200001];
	scanf("%d",&N);
	scanf("%s",S);
	
	for(int i=0;i<N;i++){
		if(S[i]=='#'){
			count1++;
		}else{
			count2++;
		}
	}
	for(int i=0;i<N;i++){
		if(S[i] == '#')break;
		count2--;
	}
	if(count2>count1){
		printf("%d\n",count1);
	}else{
		printf("%d\n",count2);
	}
	return 0;
}