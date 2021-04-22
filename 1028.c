#include <stdio.h>

int main(int argc, char** argv)
{
	int n, f1,f2, aux;
	int cont = 0;
	scanf("%d",&n);
	while(cont < n)
	{
		scanf("%d %d",&f1,&f2);
		if(f1 < f2){
			f1 = f1 + f2;
			f2 = f1 - f2;
			f1 = f1 - f2;
		}
		aux = f2;
		while(f1 % f2 != 0)
		{
			aux = f1 % f2;
			f1 = f2;
			f2 = aux;
		}
		printf("%d\n",aux);
		cont+=1;
		
	}
	return 0;
}