#include <stdio.h>
#define Fori(g) for(int i=0;i<g;i++)
#define	Forj(g) for(int j=0;j<g;j++)
#define min(aa,bb) return (aa<bb)?aa:bb
#define max(aa,bb) return (aa<bb)?bb:aa

int main(){
	int h1,h2;
	scanf("%d%d",&h1,&h2);
	printf("%d\n",h1-h2);
	return 0;
}