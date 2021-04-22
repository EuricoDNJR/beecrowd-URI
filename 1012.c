#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double A, B, C;
    scanf("%lf %lf %lf",&A,&B,&C);
	printf("TRIANGULO: %.3lf\n",(A*C)/2);
  	printf("CIRCULO: %.3lf\n",3.14159*pow(C,2));
  	printf("TRAPEZIO: %.3lf\n",(C*(A+B))/2);
  	printf("QUADRADO: %.3lf\n",pow(B,2));
  	printf("RETANGULO: %.3lf\n",A*B);
    
    return 0;
}