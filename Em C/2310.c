#include <stdio.h>

int main(int argc, char** argv)
{
	int n,i=0;
	char jogador[100];
	float S,B,A,S1,B1,A1,ST=0,BT=0,AT=0,S1T=0,B1T=0,A1T=0;
	scanf("%d",&n);
	while(i<n)
	{
		scanf("%s",jogador);
		fflush(stdin);
		scanf("%f %f %f",&S,&B,&A);
		scanf("%f %f %f",&S1,&B1,&A1);
		i+=1;
		ST += S;
		BT += B;
		AT += A;
		S1T += S1;
		B1T += B1;
		A1T += A1;
	}
	printf("Pontos de Saque: %.2f %%.\n",S1T/ST*100);
	printf("Pontos de Bloqueio: %.2f %%.\n",B1T/BT*100);
	printf("Pontos de Ataque: %.2f %%.\n",A1T/AT*100);
	return 0;
}