#include <stdio.h>
#define max(x,y)x>y?x:y
int main(){
	int n,count,ki=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int j=i;
		count=0;
		while(1){
			if(j/10==0){
				count++;
				break;
			}else{
				count++;
				j/=10;
			}
		}
		if(count%2==1){
			ki++;
		}
	}
	printf("%d\n",ki);
	return 0;
}