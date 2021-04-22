#include <stdio.h>

int main()
{
	int soma=0,N,aux=0,Y,X,i=0,j=0;
	scanf("%d",&N);
	while(j<N)
	{
		scanf("%d %d",&X,&Y);
		if(X>Y){
			aux = X;
			X = Y;
			Y = aux;
		}
		for(i=X+1; i<Y; i++){
			if(i%2==1){
				soma+=i;
			}
		}
		printf("%d\n",soma);
		soma=0;
		j++;
	}
	return 0;
}