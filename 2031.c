#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char** argv)
{
	char p1[7],p2[7];
	int n,i = 0;
	scanf("%d",&n);
	while(1)
	{
		if(i == n){
			return 0;
		}
		scanf("%s",p1);
		setbuf(stdin,NULL);
		scanf("%s",p2);
		setbuf(stdin,NULL);
		if(strcmp(p1,"ataque") == 0 && strcmp(p2,"pedra") == 0){
			printf("Jogador 1 venceu\n");
		}
		else if(strcmp(p1,"pedra") == 0 && strcmp(p2,"papel") == 0){
			printf("Jogador 1 venceu\n");
		}
		else if(strcmp(p2,"pedra") == 0 && strcmp(p1,"papel") == 0){
			printf("Jogador 2 venceu\n");
		}
		else if(strcmp(p2,"ataque") == 0 && strcmp(p1,"pedra") == 0){
			printf("Jogador 2 venceu\n");
		}
		else if(strcmp(p1,"ataque") == 0 && strcmp(p2,"papel") == 0){
			printf("Jogador 1 venceu\n");
		}
		else if(strcmp(p2,"ataque") == 0 && strcmp(p1,"papel") == 0){
			printf("Jogador 2 venceu\n");
		}
		else if(strcmp(p1,"papel") == 0 && strcmp(p2,"papel") == 0){
			printf("Ambos venceram\n");
		}
		else if(strcmp(p1,"pedra") == 0 && strcmp(p2,"pedra") == 0){
			printf("Sem ganhador\n");
		}
		else if(strcmp(p1,"ataque") == 0 && strcmp(p2,"ataque") == 0){
			printf("Aniquilacao mutua\n");
		}
		i+=1;
	}
	return 0;
}