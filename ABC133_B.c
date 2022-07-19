#include <stdio.h>
#include <math.h>
int main(){
	int N,D;
	scanf("%d%d",&N,&D);
	int x[N][D],count=0;
	double ans;
	for(int i=0;i<N;i++){
		for(int j=0;j<D;j++){
			scanf("%d",&x[i][j]);
		}
	}

	for(int i=0;i<N;i++){
		for(int j=i+1;j<N;j++){
			ans=0;
			for(int k=0;k<D;k++){
				ans+=pow(x[i][k]-x[j][k],2);
			}
			//printf("ans=%lf\n",ans);
			if(sqrt(ans)-(int)sqrt(ans)==0){
				count++;
			}
		}
	}
	printf("%d\n",count);
	return 0;
}