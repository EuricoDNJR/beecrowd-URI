#include <stdio.h>

int main()
{
	double N[100],X,aux;
	int i;
	scanf("%lf",&X);
	for(i=0;i<100;i++){
		if(i==0){
			N[i]=X;
			aux=N[i];
		}else{
			N[i]=aux/2;
			aux=N[i];
		}
	}
	for(i=0;i<100;i++){
		printf("N[%d] = %.4lf\n",i,N[i]);
	}
	return 0;
}