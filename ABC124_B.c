#include <stdio.h>

int main(){
	int N,count=1,flag=0;
	scanf("%d",&N);
	int H[N];
	for(int i=0;i<N;i++){
		scanf("%d",&H[i]);
	}

	for(int i=1;i<N;i++){
		flag=0;
		for(int j=0;j<i;j++){
			if(H[i]>=H[j]){
				flag++;
			}else{
				break;
			}
			if(flag==i)count++;
		}
	}

	printf("%d\n",count);
	return 0;
}