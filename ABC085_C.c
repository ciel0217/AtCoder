#include <stdio.h>

int main(){
	int N,Y;
	int sum=0;
	scanf("%d %d",&N,&Y);

	for(int i=0;i<=N;i++){
		for(int j=0;j<=N-i;j++){
			sum=10000*i+5000*j+1000*(N-j-i);
			if(sum == Y){
				printf("%d %d %d\n",i,j,N-j-i);
				return 0;
			}
		}
	}
	printf("-1 -1 -1\n");	
	return 0;
}