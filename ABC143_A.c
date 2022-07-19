#include <stdio.h>
#define Fori(g) for(int i=0;i<g;i++)
#define	Forj(g) for(int j=0;j<g;j++)
#define min(aa,bb)  (aa<bb)?aa:bb
#define max(aa,bb)  (aa<bb)?bb:aa
//#define gcd(aa,bb)  ((!bb)?aa:gcd(bb,aa%bb))

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d\n",(a<b*2)?0:(a-b*2));
	return 0;
}