#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	char S[301];
	int k,count=0,i=0,j=0,flag=0;
	scanf("%s%d",S,&k);
	char S2[301][300];
	if(strlen(S)<k){
		printf("0\n");
		return 0;
	}
	for(i=0;i<=strlen(S)-k;i++){
		for(j=0;j<k;j++){
			S2[i][j]=S[i+j];
			printf("S2[%d][%d]=%c\n",i,j,S2[i][j]);
		}
		S2[i][j]='\0';//j=k
		printf("S2[%d][%d]=%c\n",i,j,S2[i][j]);
	}

	for(i=0;i<=strlen(S)-k;i++){
		flag=0;
		printf("S2[%d]=%s\n",i,S2[i]);
		for(j=i+1;j<=strlen(S)-k;j++){
			if(strcmp(S2[i],S2[j])==0){
				flag=1;
				continue;
			}
		}
		if(flag==0)count++;
	}

	printf("%d\n",count);
	return 0;
}