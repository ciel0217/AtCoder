#include <stdio.h>

int main(){
	int N,sum2=0,sum=0,i=0,max=0;
	scanf("%d",&N);
	int A[2][N];

	for(i;i<2;i++){
		for(int j=0;j<N;j++){
			scanf("%d",&A[i][j]);
		}
	}
	for(i=0;i<N;i++){
		sum2+=A[0][i];
		for(int j=i;j<N;j++){
			sum+=A[1][j];
		}
		if(max<sum2+sum)max=sum2+sum;
		sum=0;
	}
	printf("%d\n",max);
	return 0;
}