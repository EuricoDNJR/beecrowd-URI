#include <stdio.h>

int main(int argc, char** argv)
{
	int n, cont = 0, x, y,soma,i;
	scanf("%d",&n);
	while(cont < n)
	{
		soma = 0;
		scanf("%d %d",&x,&y);
		if(x % 2 == 1){
			y -= 1;
			soma += x;
		}else
		{
			x += 1;
			soma += x;
			y -= 1;
		}
		for(i = 0; i < y; i++){
			x += 2;
			soma += x;
		}
		cont +=1 ;
		printf("%d\n",soma);
		soma = 0;
	}
	return 0;
}