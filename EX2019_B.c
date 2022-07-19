#include <stdio.h>

int main(){
	int N;
	int count=0,count2=0;
	char num[100];
	scanf("%d",&N);
	scanf("%s",num);

	for(int i=0;i<N;i++){
		if(num[i] == 'R'){
		count++;
		}else if(num[i] == 'B'){
		count2++;
		}
	}

	if(count > count2){
		printf("Yes\n");
	}else{
		printf("No\n");
	}
	return 0;
}