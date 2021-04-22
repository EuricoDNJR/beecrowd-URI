#include <stdio.h>

int main(){
	 long long  int T,aux=0,aux1=1,sm=0,i,N;
	scanf("%lld",&T);
   	 long long int v[61];
	 for(i=0;i<61;i++){
    	if(i==0){
    		v[i]=aux;
		}else{
			if(i==61-1){
				sm = aux+aux1;
				aux=aux1;
				aux1=sm;
				v[i]=aux;
			}else{
			sm = aux+aux1;
			aux=aux1;
			aux1=sm;
			v[i]=aux;
			}
		}
	 }
		for(i=0;i<T;i++){
			scanf("%lld",&N);
			printf("Fib(%lld) = %lld\n",N,v[N]);
		}
		
		
	
	return 0;
}