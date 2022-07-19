#include <stdio.h>
#define Fori(g) for(int i=0;i<g;i++)
#define	Forj(g) for(int j=0;j<g;j++)
#define min(a,b) return (a<b)?a:b
#define max(a,b) return (a<b)?b:a
#define gcd(a,b) return (!b)?a:gcd(b,a%b)

struct per{
	int num;
	int time;
};

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	/*struct per a[n],tmo;
	Fori(n)scanf("%d",&a[i].time);a[i].num=i;

	Fori(n)
		Forj(n)
			if
	*/
	int b;
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&b);
		a[b]=i;
	}

	for(int i=1;i<=n;i++){
		printf("%d\t",a[i]);
	}



	return 0;
}