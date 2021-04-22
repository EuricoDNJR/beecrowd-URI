#include <stdio.h>

int main(){
	int i=0,cont=0,X,N,j=0;
	scanf("%d",&N);
	while(j<N)
	{
		scanf("%d",&X);
		for(i=1;i<=X;i++){
			if(X%i==0){
				cont+=1;
			}
		}
		if(cont==2){
			printf("%d eh primo\n",X);
			cont=0;
		}else
		{
			printf("%d nao eh primo\n",X);
			cont=0;
		}
		j+=1;	
	}
	
	return 0;
}