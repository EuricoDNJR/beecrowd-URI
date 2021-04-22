#include <stdio.h>
 
int main() {
 
    char nome[20];
    double slfixo,tvendas, total;	
    
    scanf("%s",nome);
    scanf("%lf",&slfixo);
    scanf("%lf",&tvendas);
	tvendas=tvendas*0.15;
	total=slfixo+tvendas;
	printf("TOTAL = R$ %.2lf\n",total);
	
 
    return 0;
}