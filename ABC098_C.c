#include <stdio.h>

int main(){
	int N,count=0;
	char S[300001];
	scanf("%d",&N);
	scanf("%s",S);
	int min;
	for(int i=1;i<N;i++){
		if(S[i]=='E')count++;
	}
min=count;
	for(int i=1;i<N;i++){
		if(S[i]=='E')count--;
		if(S[i-1]=='W')count++;
		if(min>count)min=count;
	}

	printf("%d\n",min);
	return 0;
}