#include <stdio.h>

int main (){
	int n,alcool=0,gasolina=0,diesel=0;
	
	while(1){
		scanf("%d",&n);
		if(n<1 || n>4){
			do{
				scanf("%d",&n);
				if(n==4){
					printf("MUITO OBRIGADO\n");
					printf("Alcool: %d\n",alcool);
					printf("Gasolina: %d\n",gasolina);
					printf("Diesel: %d\n",diesel);
					return 0;
				}
			}while(n<1 || n>4);
		}
		if(n==4){
			printf("MUITO OBRIGADO\n");
			printf("Alcool: %d\n",alcool);
			printf("Gasolina: %d\n",gasolina);
			printf("Diesel: %d\n",diesel);
			return 0;
		}
		if(n==1){
			alcool+=1;
		}
		if(n==2){
			gasolina+=1;
		}
		if(n==3){
			diesel+=1;
		}
	}
return 0;
}