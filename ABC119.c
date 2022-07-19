#include <stdio.h>
#include <string.h>

int main(){
	int N;
	double Y=0;
	scanf("%d",&N);
	double x[N];
	char u[32];
	char s[]="JPY";
	char s1[]="BTC";

	for(int i=0;i<N;i++){
		scanf("%lf",&x[i]);
		scanf("%s",u);
		if((strcmp(s,u))==0){
			Y+=x[i];
		}else if((strcmp(s1,u))==0){
			Y+=x[i]*380000;
		}
	}

		printf("%lf\n",Y);

	return 0;
}