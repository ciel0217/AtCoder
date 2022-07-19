#include <stdio.h>

int main(){
	int n,max=0,count;
	scanf("%d",&n);
	int h[n];
	for(int i=0;i<n;i++){
		scanf("%d",&h[i]);
	}
	for(int i=0;i<n;i++){
		count=0;
		while(1){
			int j=i+count;
			if(h[j]<h[j+1])break;
			count++;
		}
		if(max<count)max=count;
	}
	printf("%d\n",max);
	return 0;
}