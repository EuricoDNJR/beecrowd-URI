#include <stdio.h>

int main()
{
	int i,n;
	char animal;
	float sapos=0,coelhos=0,ratos=0,qt,tt=0;;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%f %c",&qt,&animal);
		fflush(stdin);
		tt+=qt;
		if(animal=='S'){
			sapos+=qt;
		}
		if(animal=='R'){
			ratos+=qt;
		}
		if(animal=='C'){
			coelhos+=qt;
		}
	}
	printf("Total: %.0f cobaias\n",tt);
	printf("Total de coelhos: %.0f\n",coelhos);
	printf("Total de ratos: %.0f\n",ratos);
	printf("Total de sapos: %.0f\n",sapos);
	printf("Percentual de coelhos: %.2f %%\n",coelhos/tt*100);
	printf("Percentual de ratos: %.2f %%\n",ratos/tt*100);
	printf("Percentual de sapos: %.2f %%\n",sapos/tt*100);
	return 0;
}