#include <stdio.h>

int main(){
	double x[3000];
	int ch=0;
	int a;
	double max=0;
	double atai=0;
	scanf("%d",&a);

	for(int b=0;b<a;b++){
		scanf("%lf",&x[b]);
	}
	for(int k=0;k<a;k++){
		max=0;
		for(int i=0;i<a;i++){
			for(int j=0;j<=k;j++){
				atai+=x[i+j];	
			}
		if(max<atai)max=atai;
		atai=0;
		}
		printf("%lf\n",max);
	}
	return 0;
}
