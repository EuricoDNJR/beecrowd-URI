#include <stdio.h>

int main()
{
	int N[1000], i, j,T;
	
	scanf("%d",&T);
	for(i=0,j=0;i<1000;i++,j++){
		if(j==T){
			j=0;
			N[i]=j;
		}else{
			N[i]=j;
		}
	}
	for(i=0;i<1000;i++){
		printf("N[%d] = %d\n",i,N[i]);
	}
	return 0;
}