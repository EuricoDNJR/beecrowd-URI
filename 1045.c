#include <stdio.h>
#include <math.h>
int main()
{
	double A,B,C,aux;
	scanf("%lf %lf %lf",&A,&B,&C);
	
	if(B>A && B>C){
		aux=A;
		A=B;
		B=aux;
	}
	if(C>A && C>B){
		aux=A;
		A=C;
		C=aux;
	}
	
		if(A>=B+C){
			printf("NAO FORMA TRIANGULO\n");
		}else{
		if(pow(A,2)==pow(B,2)+pow(C,2)){
			printf("TRIANGULO RETANGULO\n");
		}
		if(pow(A,2)>pow(B,2)+pow(C,2)){
			printf("TRIANGULO OBTUSANGULO\n");
		}
		if(pow(A,2)<pow(B,2)+pow(C,2)){
			printf("TRIANGULO ACUTANGULO\n");
		}
		if(A==B && B==C){
			printf("TRIANGULO EQUILATERO\n");
		}
		if(A==B && C!=A){
			printf("TRIANGULO ISOSCELES\n");
		}
		if(A==C && B!=A){
			printf("TRIANGULO ISOSCELES\n");
		}
		if(C==B && A!=B){
			printf("TRIANGULO ISOSCELES\n");
		}
		}
		
	return 0;
}