#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	int i,p,n,a,cont=0,ant, dist;
	scanf("%d %d",&p,&n);
	for(i = 0; i < n; i++){
		scanf("%d",&a);
		if(i == 0){
			ant = a;
		}else
		{
			dist = ant - a;
			ant = a;
			if(dist < 0){
				dist *= -1;
			}
			if(dist > p){
				cont+=1;
			}
		}
		
	}
	if(cont == 0){
		printf("YOU WIN\n");
	}else
	{
		printf("GAME OVER\n");
	}
	return 0;
}