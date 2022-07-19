#include <stdio.h>

int main(){
	long long int a,b,c,d,n,tmp,r,f,g,h,e;
	scanf("%lld%lld%lld%lld",&a,&b,&c,&d);

	f=b/c-(a-1)/c;
	g=b/d-(a-1)/d;
	e=c*d;
	if(c<d){
   		tmp = c;
    	c = d;
    	d = tmp;
  	}
  /* ユークリッドの互除法 */
	r = c % d;
	while(r!=0){
    	c = d;
    	d = r;
    	r = c % d;
  	}
	h=b/(e/d)-(a-1)/(e/d);
	printf("%lld\n",b-a+1-(f+g-h));
	return 0;
}