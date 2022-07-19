#include <stdio.h>
#define Fori(g) for(int i=0;i<g;i++)
#define	Forj(g) for(int j=0;j<g;j++)
#define min(aa,bb) return ((aa<bb)?aa:bb)
#define max(aa,bb) return ((aa<bb)?bb:aa)
#define gcd(aa,bb) return ((!bb)?aa:gcd(bb,aa%bb))

int main(){
	int c,d,count=0,count2=0;
	scanf("%d%d",&c,&d);
	static int p[10000000];
	Fori(max(c,d))if(c%i==0 && d%i==0){
		p[count]=i;
		count++;
	}


	for(int i=0;i<count;i++){
		for(int j=i+1;j<=count;j++){
			//if(p[i]+p[i+1]>p[count])break;
			if(gcd(p[i],p[j])==1){
			count2++;
			if(c%(p[i]+p[j])==0 && d%(p[i]+p[j])==0)count2++;
			}
		}
	}
	printf("%d\n",count2);
	return 0;
}