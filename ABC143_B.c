#include <stdio.h>
#define Fori(g) for(int i=0;i<g;i++)
#define	Forj(g) for(int j=0;j<g;j++)
#define min(aa,bb) (aa<bb)?aa:bb
#define max(aa,bb) (aa<bb)?bb:aa
//#define gcd(aa,bb) return (!bb)?aa:gcd(bb,aa%bb)

int main(){
	int n,sum=0;
	scanf("%d",&n);
	int d[n];
	Fori(n)scanf("%d",&d[i]);
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			sum+=d[i]*d[j];
		}
	}
	printf("%d\n",sum);
	return 0;
}