#include <stdio.h>
#include <string.h>

struct info
{
	int tam;
	char palavra[52];
	
}frase[52],aux;

void insercao(int n);


int main()
{
	
	int n,cont=0,i,j,k;
	char letras[5000];
	scanf(" %d",&n);
	while(cont<n)
	{
			scanf(" %[^\n]s",letras);
			setbuf(stdin,NULL);
			i=0;
			j=0;
			k=0;
			while(letras[i]!='\0')
			{
				
				if(letras[i]==' '){
					frase[j].palavra[k]='\0';
					frase[j].tam = strlen(frase[j].palavra);
					j++;
					k=0;
					i++;
				}
				
					frase[j].palavra[k]=letras[i];
					
				k++;
				i++;
			}
			
			frase[j].palavra[k]='\0';
			frase[j].tam = strlen(frase[j].palavra);
			insercao(j+1);
		cont+=1;
		i=0;
		j=0;
		k=0;
		
	}
	
	return 0;
}

void insercao(int n){
	int i,j;
	
	for(i=1;i<n;i++){
			aux = frase[i];
			j = i - 1;
			while((j>=0)&&(aux.tam>frase[j].tam)){
				frase[j+1]=frase[j];
				j--;
			}
			frase[j+1]=aux;
	}
	for(i=0;i<n;i++){
		if(i==n-1){
			printf("%s\n",frase[i].palavra);
		}else
		{
			printf("%s ",frase[i].palavra);
		}
	}
	
	
}