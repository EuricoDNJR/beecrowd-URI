#include <stdio.h>

int main(){ 
float nt,cont=0,vl=0;

do{
	if(cont<2){
		scanf("%f",&nt);
	}
	if((nt<1 || nt>2) && cont==2){
		do{
			cont=0;
			printf("novo calculo (1-sim 2-nao)\n");
			scanf("%f",&nt);
			if(nt==2){
				return 0;
			}
			if(nt==1){
				vl=0;
				scanf("%f",&nt);
				break;
			}
		}while(nt<1 || nt>2);
	}
	if(nt>=0 && nt<=10){
		cont+=1;
		vl+=nt;
	}else{
		printf("nota invalida\n");
	}
	if(cont==2){
		printf("media = %.2f\n",vl/cont);
	}
}while(1);

return 0;
}