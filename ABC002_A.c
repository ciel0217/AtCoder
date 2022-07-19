#include <stdio.h>
#define Fori(g) for(int i=0;i<g;i++)
#define	Forj(g) for(int j=0;j<g;j++)
#define min(aa,bb) (aa<bb)?aa:bb
#define max(aa,bb) (aa<bb)?bb:aa

int main(){
	int x,y;
	scanf("%d%d",&x,&y);
	printf("%d\n",max(x,y));
	return 0;
}