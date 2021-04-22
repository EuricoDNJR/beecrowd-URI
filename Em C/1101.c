#include<stdio.h>
int main(){
    int M,N,soma=0,AUX;
    
    while(1){
		scanf("%d %d",&M,&N);
		if(N<=0 || M<=0){
			return 0;
		}
		if(N<M){
			AUX=M;
			M=N;
			N=AUX;
		}
		for(M=M;M<=N;M++){
			printf("%d ",M);
			soma+=M;
		}
		printf("Sum=%d\n",soma);
		soma=0;
	}
    
    
    return 0;
}