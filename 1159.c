#include <stdio.h>

int main(int argc, char** argv)
{
	int x,lmt = 4, i;
	while(1)
	{
		int soma = 0;
		scanf("%d",&x);
		if(x == 0){
			return 0;
		}
		if(x % 2 == 0){
			soma += x;
		}else
		{
			x += 1;
			soma += x;
		}
		for( i = 0; i < lmt; i++){
			x += 2;
			soma += x;
		}
		printf("%d\n",soma);	
	}
	return 0;
}