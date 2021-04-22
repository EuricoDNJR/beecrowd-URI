#include <stdio.h>

typedef struct
{
	int vagao;
}dale;

int trocas = 0;
void bolha(dale trem[], int n);
int main()
{
	int cont=0,N,L,i;
	dale trem[50];
	scanf("%d",&N);
	while(cont<N)
	{
		
		scanf("%d",&L);
		for(i=0;i<L;i++){
			scanf("%d",&trem[i].vagao);
		}
		bolha(trem, L);
		printf("Optimal train swapping takes %d swaps.\n",trocas);
		trocas = 0;
		cont+=1;
	}
	
	
	return 0;
}
void bolha(dale trem[], int n){
	int i,j;
	dale aux;
	for(i=0;i<n-1;i++){
		for(j=1;j<n-i;j++){
			if(trem[j].vagao<trem[j-1].vagao){
				aux.vagao = trem[j].vagao;
				trem[j].vagao = trem[j-1].vagao;
				trem[j-1].vagao = aux.vagao;
				trocas+=1;
			}
		}
	}
	
}

