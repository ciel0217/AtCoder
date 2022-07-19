#include <stdio.h>

int main(){
	int a[6],b[6];
	int tmp,tmp2;
	int sum=0;
	int count=0;
	for(int i=0;i<5;i++){
		scanf("%d",&a[i]);
		b[i] = (10-a[i]%10)*10;
		if(b[i]==100){
			tmp=b[count];
			tmp2=a[count];
			b[count]=b[i];
			a[count]=a[i];
			b[i]=tmp;
			a[i]=tmp2;
			count++;
		}
	}

	for(int i=count;i<5;i++){
		for(int j=i;j<5;j++){
			if(b[i]>b[j]){
				tmp2=b[i];
				tmp=a[i];
				b[i]=b[j];
				a[i]=a[j];
				b[j]=tmp2;
				a[j]=tmp;
			}
		}
	}

	for(int i=0;i<count;i++){
		sum+=a[i];
	}
	for(int i=count;i<=4;i++){
		if(i==4){
			sum+=a[i];
		}else{
			sum+=((a[i]/10)+1)*10;
		}
	}
	printf("%d\n",sum);
	return 0;
}