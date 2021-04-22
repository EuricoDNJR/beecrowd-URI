#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int N,aux=0,aux1=1,sm=0,i;
    
    scanf("%d",&N);
    for(i=0;i<N;i++){
    	if(i==0){
    		printf("%d ",aux);
		}else{
			if(i==N-1){
				sm = aux+aux1;
				aux=aux1;
				aux1=sm;
				printf("%d\n",aux);
			}else{
			sm = aux+aux1;
			aux=aux1;
			aux1=sm;
			printf("%d ",aux);
			}
		}
		
		
	}
    return 0;
}