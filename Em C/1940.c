#include <stdio.h>

int main()
{
	int i,j,maior=0,p,R,J,n;
	scanf("%d %d",&J,&R);
	int v[J];
	
	for(i=0;i<J;i++){
		v[i]=0;
	}
	
	for(i=0,j=0;i<R*J;i++,j++){
		scanf("%d",&n);
		v[j]+=n;
		if(j==J-1){
			j=-1;
		}
	}
	
	for(i=0;i<J;i++){
		for(j=0;j<J;j++){
			if(v[i]>=v[j]){
				maior+=1;
			}
		}
		if(maior==J){
			p=i;
		}
		maior=0;
	}
	printf("%d\n",p+1);
	return 0;
}