#include <stdio.h>

int main(){
	int N,X,count=0;
	scanf("%d%d",&N,&X);
	int L[N],d[N];
	for(int i=0;i<N;i++){
		scanf("%d",&L[i]);
	}
	int j;
	d[0]=0;
	for(j=1;j<=N+1;j++){
		d[j]=d[j-1]+L[j-1];
		if(d[j]>X)break;
	}
	/*while(d[j]<=X && count <= N+1){
		j++;
		d[j]=d[j-1]+L[j-1];
		count++;
	}*/
	printf("%d\n",j);
	return 0;
}