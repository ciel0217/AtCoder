#include <stdio.h>

int main(){
	int A,B,C,X;
	int sum=0;
	int count=0;

	scanf("%d",&A);
	scanf("%d",&B);
	scanf("%d",&C);
	scanf("%d",&X);

	for(int i=0;i<=A;i++){
		for(int j=0;j<=B;j++){
			for(int z=0;z<=C;z++){
				sum=500*i+100*j+50*z;
				if(X==sum)count++;
			}
		}
	}
	printf("%d\n",count);
	return 0;
}