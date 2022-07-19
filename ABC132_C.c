#include <stdio.h>
#include <stdlib.h>
int asc(const void *a, const void *b) {
  return *(int *)a - *(int *)b;
}

int main(){
	int n,t,c;
	scanf("%d",&n);
	int d[n];
	for(int i=0;i<n;i++){
		scanf("%d",&d[i]);
	}

	qsort(d,n,sizeof(int),asc);

	t=d[n/2-1];
	c=d[n/2];
	printf("%d\n",c-t);
	return 0;
}