#include <stdio.h>

void somaprimo(int *peso);

int main()
{
	int peso;
	scanf("%d",&peso);
	somaprimo(&peso);
	printf("%d km/h\n",peso);
	printf("%d h / %d d\n",60000000/peso,(60000000/peso)/24);
	
	
	return 0;
}
void somaprimo(int *peso){
	int cont=0,clone,i,lmt=0,aux=0;
	clone = *peso;
	while(1)
	{
		i=1;
		while(i<=clone)
		{
			if(clone%i==0){
				cont+=1;
			}
			i+=1;
		}
		if(cont==2){
			lmt+=1;
			aux+=clone;
		}
		cont=0;
		clone+=1;
		if(lmt==10){
			break;
		}
	}
	*peso=aux;
	
}