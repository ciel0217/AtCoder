#include <stdio.h>

int main(){
	int n,flag;
	scanf("%d",&n);
	int b[n-1],max=0;
	for(int i=0;i<n-1;i++){
		scanf("%d",&b[i]);
		//printf("%d\n",b[i]);
	}
	int index=0;
	int count=0;
	int count2=0;
	while((n-1)>index){
		count2=0;
		while(1){
			count++;
			if(count>=n-1)break;
			if(b[count]>b[count-1]){
				max+=b[count];
				break;
			}
			count2++;
			flag=1;
		}
		if(flag)max+=b[count-1]*count2;
		if(index==0)max+=b[count-1]*(count2>0?1:2);
	//	printf("b[%d]:%d\n",count-1,b[count-1]);
		index=count;
	}
	/*for(int i=0;i<n-1;i++){
		max+=b[i];
		//("%d\n",b[i]);
	}*/
	printf("%d\n",max);
	return 0;
}