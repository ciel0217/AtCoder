#include <stdio.h>
#include <stdlib.h>

int main(){
	int N,a[100001]={0},index=0;;
	int check;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%d",&check);
		if(check>100000)index++;
		else a[check]++;
	}
	for(int i=0;i<100000;i++){
		if(i>a[i]){
			index+=a[i];
		}else if(i<a[i]){
			index+=a[i]-i;
		}
	}
	printf("%d\n",index);
	return 0;
}