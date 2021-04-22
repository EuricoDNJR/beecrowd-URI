#include <stdio.h>
 
int main() {
 
    int valor,valor1,n100=0,n50=0,n20=0,n10=0,n5=0,n2=0,n1=0;
	scanf("%d",&valor);
	valor1=valor;
		if(valor>=100){
		n100=valor/100;
		valor=valor-(n100*100);
		}
		if(valor>=50){
			n50=valor/50;
			valor=valor-(n50*50);
		}
		if(valor>=20){
			n20=valor/20;
			valor=valor-(n20*20);
		}
		if(valor>=10){
			n10=valor/10;
			valor=valor-(n10*10);
		}
		if(valor>=5){
			n5=valor/5;
			valor=valor-(n5*5);
		}
		if(valor>=2){
			n2=valor/2;
			valor=valor-(n2*2);
		}
		if(valor>=1){
			n1=valor/1;
			valor=valor-(n1*1);
		}
	printf("%d\n",valor1);
	printf("%d nota(s) de R$ 100,00\n",n100);
	printf("%d nota(s) de R$ 50,00\n",n50);
	printf("%d nota(s) de R$ 20,00\n",n20);
	printf("%d nota(s) de R$ 10,00\n",n10);
	printf("%d nota(s) de R$ 5,00\n",n5);
	printf("%d nota(s) de R$ 2,00\n",n2);
	printf("%d nota(s) de R$ 1,00\n",n1);
 
    return 0;
}