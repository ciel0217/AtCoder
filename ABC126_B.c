#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	if(1 <= n%100 && n%100 <=12){
		if(1<=n/100&&n/100<=12){
			printf("AMBIGUOUS\n");
			return 0;
		}else {
			printf("YYMM\n");
			return 0;
		}
	}else if(13<=n%100 || n%100==0){
		if(1<=n/100 &&  n/100 <= 12){
			printf("MMYY\n");
			return 0;
		}else{
			printf("NA\n");
			return 0;
		}
	}
	return 0;
}