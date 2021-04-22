#include <stdio.h>
 
int main() {
 
    double valor;
	int n100=0,n50=0,n20=0,n10=0,n5=0,n2=0,m1=0,m50=0,m25=0,m10=0,m5=0,m01=0;
	scanf("%lf",&valor);
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
			m1=valor/1;
			valor=valor-(m1*1);
		}
		if(valor>=0.50){
			m50=valor/0.50;
			valor=valor-(m50*0.50);
		}
		if(valor>=0.25){
			m25=valor/0.25;
			valor=valor-(m25*0.25);
		}
		if(valor>=0.10){
			m10=valor/0.10;
			valor=valor-(m10*0.10);
		}
		if(valor>=0.05){
			m5=valor/0.05;
			valor=valor-(m5*0.05);
		}
		valor=valor+0.000020;
		if(valor>=0.01){
			m01=valor/0.01;
			valor=valor-(m01*0.01);
		}
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n",n100);
	printf("%d nota(s) de R$ 50.00\n",n50);
	printf("%d nota(s) de R$ 20.00\n",n20);
	printf("%d nota(s) de R$ 10.00\n",n10);
	printf("%d nota(s) de R$ 5.00\n",n5);
	printf("%d nota(s) de R$ 2.00\n",n2);
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n",m1);
	printf("%d moeda(s) de R$ 0.50\n",m50);
	printf("%d moeda(s) de R$ 0.25\n",m25);
	printf("%d moeda(s) de R$ 0.10\n",m10);
	printf("%d moeda(s) de R$ 0.05\n",m5);
	printf("%d moeda(s) de R$ 0.01\n",m01);
 
    return 0;
}