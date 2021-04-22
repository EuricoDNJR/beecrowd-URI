#include <stdio.h>

int main(int argc, char** argv)
{
	double n, calc = 0.0;
	int i;
	scanf("%lf",&n);
	for(i = 0; i < n; i++){
		 calc += 6.00;
		 calc = 1.0/calc;
	}
	calc += 3.00;
	printf("%.10lf\n",calc);
	return 0;
}