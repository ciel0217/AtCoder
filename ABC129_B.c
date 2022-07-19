#include <stdio.h>
#include <stdlib.h>

int main(){
	int N,w[101],num1=0,num2=0,ans=100000,c;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%d",&w[i]);
	}

	for(int i=1;i<N;i++){
		num1=0;
		num2=0;
		for(int j=0;j<i;j++){
			num1+=w[j];
		}
		for(int k=i;k<N;k++){
			num2+=w[k];
		}
		c=abs(num1-num2);
		if(ans>c)ans=c;
	}
	printf("%d\n",ans);
	return 0;
}