#include <stdio.h>

int main(){
	int A,B,max=0,sum=0;
	scanf("%d %d",&A,&B);
	int A1 = A + (A-1);
	int B1 = B + (B-1);
	if(A1 > B1){
		max=A1;
	}else{
		max=B1;
	}

	for(int i=A;i>=A-1;i--){
		sum=0;
		for(int j=B;j>=B-1;j--){
			sum=i+j;
			if(max<sum){
				max=sum;
			}
		}
	}
	printf("%d\n",max);
	return 0;
}