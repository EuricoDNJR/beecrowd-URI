#include <stdio.h>

int main()
{
	int i,j,menor=0,pos=0,valor,N;
	scanf("%d",&N);
	int X[N];
	for(i=0;i<N;i++){
		scanf("%d",&X[i]);
	}
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			if(X[i]<X[j]){
				menor+=1;
			}
		}
		if(menor==N-1){
			pos=i;
			valor=X[i];
		}else{
			menor=0;
		}
	}
	printf("Menor valor: %d\n",valor);
	printf("Posicao: %d\n",pos);
	return 0;
}