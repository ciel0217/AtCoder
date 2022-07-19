#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,x,sum,count=0;
	int *index = (int *)malloc(sizeof(int )*100000000);
	scanf("%d%d",&n,&x);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]==-1)count++;
	}
	if(n==1 && a[0]!=-1){
		printf("-1\n");
		return 0;
	}

	for(int j=0;j<n;j++){
		if(a[j]!=-1){
			sum^=a[j];
		}else{
			index[i]=j;
		}
		a[index[i]]=sum^x;
	}
	
	for(int i=0;i<n;i++){
		printf("%d\t",a[i]);	
	}
	return 0;
}