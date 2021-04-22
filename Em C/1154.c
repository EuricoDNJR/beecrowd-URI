#include<stdio.h>
int main(){
    float n,soma=0;
    int cont=0;
    do{
		scanf("%f",&n);
		soma+=n;
		cont+=1;
	}while(n>=0);
    soma-=n;
    cont-=1;
    printf("%.2f\n",soma/cont);
    
    return 0;
}