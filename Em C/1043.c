#include <stdio.h>

int main(int argc, char** argv)
{
	float a,b,c;
	scanf("%f %f %f",&a,&b,&c);
	if(b - c < a && a < b + c && a - c < b && b < a + c && a - b < c && c < a + b){
		printf("Perimetro = %.1f\n",a+b+c);
	}else{
		printf("Area = %.1f\n",((a+b)/2)*c);
	}
	return 0;
}