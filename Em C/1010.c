#include <stdio.h>
 
int main() {
 
   int cod, unit1, unit2;
    double valor1,valor2, pag;
    scanf("%d %d %lf",&cod,&unit1,&valor1);
    scanf("%d %d %lf",&cod,&unit2,&valor2);
	valor1=unit1*valor1;
	valor2=unit2*valor2;
	pag=valor1+valor2;
	printf("VALOR A PAGAR: R$ %.2lf\n",pag);
 
    return 0;
}