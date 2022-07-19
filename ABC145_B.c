#include <stdio.h>
#include <string.h>
#define Fori(g) for(int i=0;i<g;i++)
#define	Forj(g) for(int j=0;j<g;j++)
#define min(aa,bb) return (aa<bb)?aa:bb
#define max(aa,bb) return (aa<bb)?bb:aa

int main(){
	int n,flag=0;
	char s[100];
	scanf("%d",&n);
	scanf("%s",s);
	int j=n/2;
	if(n==1 || n%2==1){
		printf("No\n");
		return 0;
	}
	for(int i=0;i<n/2;i++){
		if(s[i]==s[j])flag++;
		j++;
	}
	if(flag==n/2)printf("Yes\n");
	else printf("No\n");
	return 0;
}