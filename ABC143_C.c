#include <stdio.h>
#define Fori(g) for(int i=0;i<g;i++)
#define	Forj(g) for(int j=0;j<g;j++)
#define min(aa,bb) (aa<bb)?aa:bb
#define max(aa,bb) (aa<bb)?bb:aa
//#define gcd(aa,bb) return (!bb)?aa:gcd(bb,aa%bb)

int main(){
	int n,count=0;
	scanf("%d",&n);
	char s[n+1];
	scanf("%s",s);
	int i;
	//printf("%s\n",s);
	for(i=0;i<n;i++){
		while(1){
			//printf("1\n");
			if(s[i]!=s[i+1])break;
			i++;
			}
	//	printf("%d\n",i);	
		count++;
	}
	printf("%d\n",count);
	return 0;
}