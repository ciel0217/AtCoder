#include <stdio.h>
int q1,q2,ny,nx,R,C,Sy,Sx,gy,gx,v[51][51],head=0,tail=1,queue1[3000],queue2[3000],count[50][50];
char c[51][51];
int v1[]={1,0,-1,0};
int v2[]={0,1,0,-1};
int check(int y,int x){
	if(x<C&&y<R&&0<=x&&0<=y&&v[y][x]==0&&c[y][x]=='.'){
		count[y][x]=count[q1][q2]+1;
		v[y][x]=1;
		if(y==gy-1&&x==gx-1){
			printf("%d\n",count[y][x]);
			return 0;
		}
		queue1[tail]=y;
		queue2[tail]=x;
		tail++;
	}
	return 0;
}

int main(){
	scanf("%d%d",&R,&C);
	scanf("%d%d",&Sy,&Sx);
	scanf("%d%d",&gy,&gx);
	for(int i=0;i<R;i++){
		scanf("%s",c[i]);
	}
	for(int i=0;i<R;i++){
		for(int j=0;j<C;j++){
			v[i][j]=0;
		}
	}
	v[Sy-1][Sx-1]=1;
	queue1[0]=Sy-1;
	queue2[0]=Sx-1;
	count[Sy-1][Sx-1]=0;
	while(head!=tail){
		q1=queue1[head];
		q2=queue2[head];
		head++;
		for(int i = 0; i < 4; ++i){
			ny=q1+v1[i];
			nx=q2+v2[i];
			check(ny,nx);
		}
	}
	return 0;
}