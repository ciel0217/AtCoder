#include <stdio.h>

int main(){
	int n,b;
	sacnf("%d%d",&n,&b);
	for(int i=1;i<=3;i++){
		if(n != i && b!= i){
			printf("%d",i);
			return 0;
		}
	}
	return 0;
}