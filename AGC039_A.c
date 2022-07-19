#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Fori(g) for(int i=0;i<g;i++)
#define	Forj(g) for(int j=0;j<g;j++)
#define min(aa,bb) return (aa<bb)?aa:bb
#define max(aa,bb) return (aa<bb)?bb:aa
#define gcd(aa,bb) return (!bb)?aa:gcd(bb,aa%bb)
typedef long long int ll;

int main(){
	ll k,count=0,ans=0,ans2=0;
	int c=1;
	char s[101];
	scanf("%s",s);
	scanf("%lld",&k);
	while(1){
		if(s[c]==s[c+1])c++;
		if(s[c]!=s[c+1])break;
	}
	c+=1;
	//printf("%d\n",c);
	if(strlen(s)==c){
		if(c%2==1){
			ans+=c/2*(k%2==1?(k/2)+1:k/2);
			ans+=c-c/2*k/2;
			printf("%lld\n",ans);
			return 0;
		}else{
			ans+=(c/2)*k;
			printf("%lld\n",ans);
			return 0;
		}
	}

	if(s[0]==s[strlen(s)-1]){
		ans=1;
		int flag=0;
		for(int i=1;i<strlen(s);i++){
			count=1;
			while(1){
				if(i==strlen(s)-1){
					if(count%2==0 && flag ){
						ans--;
						//printf("a\n");
					}
					/*if(flag=0 && count%2==1){
						printf("ans%d\n",count);
						count+=ans;
						ans2+=ans*(k/2);
						ans2+=(ans-1)*(k%2==1?(k/2)+1:k/2);
						printf("%lld\n",ans2);
						return 0;
					}
					*/
				}
				if(s[i]!=s[i+1])break;
				count++;
				i++;

			}
			flag++;
			ans+=count/2;
		}
		
		ans*=(k-1);
		//printf("%d\n",ans);
		for(int i=0;i<strlen(s)-1;i++){
			count=1;
			while(1){
				if(s[i]!=s[i+1])break;
				count++;
				i++;
			}
			ans+=count/2;
		}
		//printf("%d\n",ans);
	}else{
		for(int i=0;i<strlen(s)-1;i++){
			count=1;
			while(1){
				if(s[i]!=s[i+1])break;
				count++;
				i++;
			}
			//printf("%d\n",count);
			ans+=count/2;
		}
		ans*=k;
	}
	if(strlen(s)==1 && k>1){
		printf("%lld",k/2);
		return 0;
	}else if(strlen(s)==1 && k==1){
		printf("0\n");
		return 0;
	}
	printf("%lld\n",ans);
	return 0;
}