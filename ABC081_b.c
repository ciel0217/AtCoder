#include <stdio.h>

int main(){
	int N;
	int num[10000];
	int flag=0;
	int count=0;
	int i=0;

	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%d",&num[i]);
	}

	for(i=0;num[i]%2==0;i++){
		num[i+N]=num[i]/2;
		count++;
	}

	

printf("%d\n",count/N);
return 0;
	
}