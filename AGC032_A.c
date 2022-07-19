#include <stdio.h>

int main(){	
	int a[100];
	int N=0;
	int b[100];
	int count=0;
	int flag=0;
 
	scanf("%d",&N);
	for(int i=1;i<=N;i++){
		scanf("%d",&b[i]);
	}
 	for(int i=1;i<=N;i++){
 		for(int j=1;j<=N;j++){
 			a[i]=i;
 			if(i==b[j])count++;
 		}
 	}

 	if(count != N){
 		printf("-1\n");
 		return 0;
 	}
 
	for(int i=1;i<=N;i++){
		for(int j=1;j<=N;j++){
			if(b[i]<=i){
				if(i==b[j]){
					a[i] = i;
					printf("%d\n",a[i]);
					break;
				}
			}else if(b[i]>i){
				printf("-1\n");
				flag=1;
				break;
			}		
		
		}
	if(flag==1)break;
	}
	return 0;
}

