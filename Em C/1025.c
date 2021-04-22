#include <stdio.h>
#include <stdlib.h>

void insercao(int v[], int n);
int main()
{
	int N,cont=1,Q,i,j,flag=0,*v = NULL,*v2 = NULL;
	while(1)
	{
		scanf("%d %d",&N,&Q);
		if(N==0 && Q==0)
			return 0;
		
		v = (int *)realloc(v,sizeof(int)*N);
		for(i=0;i<N;i++)
			scanf("%d",&v[i]);

		insercao(v, N);
		v2 = (int *)realloc(v2,sizeof(int)*Q);	

		for(j=0;j<Q;j++)
			scanf("%d",&v2[j]);
		
		
		printf("CASE# %d:\n",cont);
		for(j=0;j<Q;j++){
			for(i=0;i<N;i++){
				if(v[i]==v2[j]){
					flag=1;
					printf("%d found at %d\n",v[i],i+1);
					break;
				}
			}
			if(flag==0)
				printf("%d not found\n",v2[j]);
			flag=0;
		}
		cont+=1;
	}
	
	free(v);
	free(v2); 
	
	return 0;
}
void insercao(int v[], int n){
	int i,j,aux;
	
	for(i=1;i<n;i++){
		aux = v[i];
		j = i - 1;
		while((j>=0)&&(aux<v[j]))
		{
			v[j+1]=v[j];
			j--;
		}
		v[j+1]=aux;
	}
	
}