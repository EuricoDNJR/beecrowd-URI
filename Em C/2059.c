#include <stdio.h>

int main(int argc, char** argv)
{
	int p,j1,j2,r,a,escolhaj1,roubouj1,acusouj2,soma;
	
	scanf("%d",&p);
	if(p == 1){
		escolhaj1 = 0;
	}else
	{
		escolhaj1 = 1;
	}
	scanf("%d %d",&j1,&j2);
	scanf("%d",&r);
	if(r == 1){
		roubouj1 = 1;
	}else
	{
		roubouj1 = 0;
	}
	scanf("%d",&a);
	if(a == 1){
		acusouj2 = 1;
	}else
	{
		acusouj2 = 0;
	}
	soma = j1 + j2;
	if(roubouj1 == 1){
		if(acusouj2 == 1){
			printf("Jogador 2 ganha!\n");
		}else
		{
			printf("Jogador 1 ganha!\n");
		}
	}
	else if(roubouj1 == 0 && acusouj2 == 1)
	{
		printf("Jogador 1 ganha!\n");
	}
	else if(soma % 2 == 0)
	{
		if(escolhaj1 == 0){
			printf("Jogador 1 ganha!\n");
		}
		else{
			printf("Jogador 2 ganha!\n");
		}
	}else
	{
		if(escolhaj1 == 0){
			printf("Jogador 2 ganha!\n");
		}
		else{
			printf("Jogador 1 ganha!\n");
		}
	}
	
	return 0;
}