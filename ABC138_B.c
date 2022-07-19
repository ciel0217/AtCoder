#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	double a[n],sum=0.0;
	for(int i=0;i<n;i++){
		scanf("%lf",&a[i]);
		sum+=1.0/a[i];
	}
	printf("%.18lf\n",1.0/(sum));
	return 0;
}