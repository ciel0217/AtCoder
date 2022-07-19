#include <stdio.h>

int main(){
	int N,sum=0;
	scanf("%d",&N);
	int h[N],C[N],a[N];
	for(int i=0;i<N;i++){
		scanf("%d",&h[i]);
	}
	for(int i=0;i<N;i++){
		scanf("%d",&C[i]);
		a[i]=h[i]-C[i];
	}

	for(int i=0;i<N;i++){
		if(a[i]>0){
			sum+=a[i];
		}
	}
printf("%d\n",sum);
return 0

}