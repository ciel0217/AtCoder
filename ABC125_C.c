#include <stdio.h>
int gcd(int a,int b){
	if(b==0){
		return a;
	}
	return gcd(b,a%b);
}

int main(){
	int N,max=0;
	scanf("%d",&N);
	int A[100001],b[100001],c[100001];
	for(int i=0;i<N;i++){
		scanf("%d",&A[i]);
	}
	b[0]=A[0];
	for(int i=1;i<N;i++){
		b[i]=gcd(b[i-1],A[i]);
		printf("b[%d]=%d\n",i,b[i]);
	}
	c[N]=0;
	for(int i=N-1;i>=0;i--){
		c[i]=gcd(c[i+1],A[i]);
		printf("c[%d]=%d\n",i,c[i]);
	}
	if(c[1]<b[N-2])max=b[N-2];
	else max=c[1];
	for(int i=1;i<N;i++){
		if(max<gcd(b[i-1],c[i+1]))max=gcd(b[i-1],c[i+1]);
	}
	printf("%d\n",max);
	return 0;
}