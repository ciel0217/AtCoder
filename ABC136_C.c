#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int h[100000];
	for(int i=0;i<n;i++){
		scanf("%d",&h[i]);
	}
	if(n==1){
		printf("Yes\n");
		return 0;
	}
	if(h[n-2]-h[n-1]>1){
		printf("No\n");
		return 0;
	}
	for(int i=n-2;i>=0;i--){
		if(h[i]-h[i+1]==1)h[i]--;
		else if(h[i]-h[i+1]>1){
			printf("No\n");
			return 0;
		}
	}
	printf("Yes\n");
	return 0;
}