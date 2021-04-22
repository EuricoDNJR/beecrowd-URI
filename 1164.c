#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv)
{
	int t,cont = 0, i,n;
	scanf("%d",&t);
	
	while(cont < t)
	{
		int soma = 0;
		
		scanf("%d",&n);
		
		for(i = n - 1; i >= 1; i--){
			
			if( n % i == 0){
				   soma += i; 	
			}
			
		}
		if(soma == n){
			printf("%d eh perfeito\n",n);
		}else
		{
			printf("%d nao eh perfeito\n",n);
		}
		cont += 1;
	}
	return 0;
}