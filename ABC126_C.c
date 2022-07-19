#include <stdio.h>
 
int main(){
	double N,K,ch,ch2;
	int count=0;
	double num=0.0;
	scanf("%lf%lf",&N,&K);
	for(int i=1.0000;i<=N;i++){
		ch2=1.00;
		ch=i;
		count=0;
		if(ch>=K){
			ch2=1.0000000000;
		}else{
			while(ch<K){
				ch*=2.00000000;
				//printf("%lf\n",ch);
				count++;
			}
			//printf("count=%d\n",count);
			for(int j=1;j<=count;j++){
                ch2*=(0.5000000000);
				//printf("ch2=%lf\n",ch2);
            }
		}
		num+=(1.00000000/N)*ch2;
		//printf("num=%lf\n",num);
	}
	printf("%.16lf\n",num);
	return 0;
}