#include <stdio.h>

int main(int argc, char** argv)
{
	int n;
	while(scanf("%d",&n) != EOF)
	{
		int qtm,qtl;
		scanf("%d %d",&qtm,&qtl);
		struct marcos
		{
			int atribute[n];
		}cartasM[qtm],cartasL[qtl];
		
		int i, j;
		for(i = 0; i < qtm; i++){
			for(j = 0; j < n; j++){
				scanf("%d",&cartasM[i].atribute[j]);
			}
		}

		for(i = 0; i < qtl; i++){
			for(j = 0; j < n; j++){
				scanf("%d",&cartasL[i].atribute[j]);
			}
		}
		
		int cardM,cardL;
		scanf("%d %d",&cardM,&cardL);
		int at;
		scanf("%d",&at);
		if(cartasM[cardM - 1].atribute[at - 1] > cartasL[cardL - 1].atribute[at - 1]){
			printf("Marcos\n");
		}
		else if(cartasM[cardM - 1].atribute[at - 1] < cartasL[cardL - 1].atribute[at - 1]){
			printf("Leonardo\n");
		}
		else
		{
			printf("Empate\n");
		}
		
	}
	return 0;
}