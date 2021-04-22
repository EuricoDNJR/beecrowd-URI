#include <stdio.h>

int main(){ 
float nt,cont=0,vl=0;

do{
	scanf("%f",&nt);
	if(nt>=0 && nt<=10){
		cont+=1;
		vl+=nt;
	}else{
		printf("nota invalida\n");
	}
	if(cont==2){
		printf("media = %.2f\n",vl/cont);
		return 0;
	}
}while(1);

return 0;
}