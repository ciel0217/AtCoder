#include <stdio.h>
#include <string.h>
int N;
struct mise{
	char name[11];
	int P;
	int num;
};

int main(){
	scanf("%d",&N);
	struct mise S[N],temp;
	for(int i=0;i<N;i++){
		scanf("%s%d",S[i].name,&S[i].P);
		S[i].num=i+1;
	}

	for(int i=0;i<N;i++){
		for(int j=N-1;j>=i;j--){
			if(strcmp(S[i].name,S[j].name) > 0){
				temp=S[i];
				S[i]=S[j];
				S[j]=temp;
			}else if(strcmp(S[i].name,S[j].name) == 0){
				if(S[i].P < S[j].P){
					temp=S[i];
					S[i]=S[j];
					S[j]=temp;
				}
			}
		}
	}
	for(int i=0;i<N;i++){
		printf("%d\n",S[i].num);
	}
	return 0;
}