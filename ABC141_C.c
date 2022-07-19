#include <stdio.h>

int main(){
	int n,k,q,max=0;
	scanf("%d%d%d",&n,&k,&q);
	int a[n],b[n];
	for(int i=1;i<=n;i++){
		a[i]=k;
		b[i]=0;
	}
	int c;
	for(int i=1;i<=q;i++){
		scanf("%d",&c);
		b[c]++;
	}

	for(int i=1;i<=n;i++){
		if(a[i]-(q-b[i])<=0)printf("No\n");
		else printf("Yes\n");
	}
	return 0;
}