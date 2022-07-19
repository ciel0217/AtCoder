#include <stdio.h>
#include <stdlib.h>

int main(){
	int N,tmp,alice=0,bob=0;
	int *card;
	scanf("%d",&N);

	card = (int *)malloc(sizeof(int)*N);
	for(int i=0;i<N;i++){
		scanf("%d",&card[i]);
	}

	for(int i=0;i<N;i++){
		for(int j=i;j<N;j++){
			if(card[j] > card[i]){
				tmp = card[i];
				card[i] = card[j];
				card[j] = tmp;
			}
		}
	}

	for(int i=0;i<N;i++){
		if(i%2==0 || i==0){
			alice+=card[i];
		}else{
			bob+=card[i];
		}
	}

	printf("%d\n",alice-bob);
	return 0;
}