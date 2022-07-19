#include <stdio.h>

int main(){
	int m,d,count=0;
	scanf("%d%d",&m,&d);
	for(int i=1;i<=m;i++){
		for(int j=1;j<=d;j++){
			int d1=j%10;
			int d10=j/10;
			if(d1*d10==i && d1>=2 && d10>=2 )count++;
		}
	}
	printf("%d\n",count);
	return 0;
}