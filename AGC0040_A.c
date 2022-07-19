#include <stdio.h>
#include <string.h>
#define Fori(g) for(int i=0;i<g;i++)
#define	Forj(g) for(int j=0;j<g;j++)
#define min(aa,bb) return (aa<bb)?aa:bb
#define max(aa,bb) return (aa<bb)?bb:aa
int sum2;

int c(int a){
	sum2+=a;
	//printf("sum2=%d\n",sum2);
	if(a==1 || a==0)return sum2;
	else c(--a);
}
int main(){
	char s[1000000];
	int sum=0;
	
	return 0;
}