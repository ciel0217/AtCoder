#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int N,A,B,C;
int l[8];
int min(int i,int j,int k,int m){
	int mm=i;
	if(mm>j)mm=j;
	if(mm>k)mm=k;
	if(mm>m)mm=m;
	return mm;
}
int dfs(int a,int b,int c,int ch){
	if(a*b*c>0 && ch==N){
		printf("%d回目:a=%d:b=%d:c=%d\n",ch,a,b,c);
		return abs(A-a)+abs(B-b)+abs(C-c)-30;
	}else if(ch==N){
		printf("%d回目:a=%d:b=%d:c=%d\n",ch,a,b,c);
		return 1000000000;
	}
	printf("ret0:\n%d回目:a=%d:b=%d:c=%d\n",ch,a,b,c);
	int ret0=dfs(a,b,c,ch+1);
	printf("ret1:\n%d回目:a=%d:b=%d:c=%d\n",ch,a,b,c);
	int ret1=dfs(a+l[ch],b,c,ch+1)+10;
	printf("ret2:\n%d回目:a=%d:b=%d:c=%d\n",ch,a,b,c);
	int ret2=dfs(a,b+l[ch],c,ch+1)+10;
	printf("ret3:\n%d回目:a=%d:b=%d:c=%d\n",ch,a,b,c);
	int ret3=dfs(a,b,c+l[ch],ch+1)+10;
	printf("ret0=%d:ret1=%d:ret2=%d:ret3=%d\n",ret0,ret1,ret2,ret3);
	return min(ret0,ret1,ret2,ret3);
}
int main(){
	scanf("%d%d%d%d",&N,&A,&B,&C);
	for(int i=0;i<N;i++){
		scanf("%d",&l[i]);
	}
 printf("%d\n",dfs(0,0,0,0));
return 0;
}