#include <stdio.h>
#define Fori(g) for(int i=0;i<g;i++)
#define	Forj(g) for(int j=0;j<g;j++)
#define min(aa,bb) return (aa<bb)?aa:bb
#define max(aa,bb) return (aa<bb)?bb:aa

int main(){
	int  a;
	scanf("%d",&a);
	if(a<100)printf("00\n");
	else if(100<=a && a<=5000){
		if(a<1000)printf("0%d\n",a/100);
		else printf("%02d\n",a/100);
	}else if(6000<=a && a<=30000)printf("%02d\n",a/1000+50);
	else if(35000<=a && a<=70000)printf("%02d\n",(a/1000-30)/5+80 );
	else if(a>70000)printf("89\n");
	return 0;
}