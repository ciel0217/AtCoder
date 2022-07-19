#include <stdio.h>
#include <math.h>
#include <string.h>
#define Fori(g) for(int i=0;i<g;i++)
#define	Forj(g) for(int j=0;j<g;j++)
#define min(aa,bb) return (aa<bb)?aa:bb
#define max(aa,bb) return (aa<bb)?bb:aa

int main(){
	double n;
	scanf("%lf",&n);
	int x[100000],y[100000];
	Fori(n)scanf("%d%d",&x[i],&y[i]);
	double sum[100000];
	int k=0;
	Fori(n)for(int j=i+1;j<n;j++){
		sum[k]=sqrt(((x[j]-x[i])*(x[j]-x[i]))+((y[j]-y[i])*(y[j]-y[i])));
		k++;
	}
	double ans=0.0;
	for(int i=0;i<k;i++){
		ans+=sum[i]*(double)(n-1);
	}

	printf("%.10lf\n",ans/(double)(k));
	return 0;
}