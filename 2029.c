#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	double v,d,raio;
	while(scanf("%lf %lf",&v,&d) != EOF)
	{
		raio = d/2;
		
		printf("ALTURA = %.2lf\n",v/(raio * raio * 3.14));
		printf("AREA = %.2lf\n",3.14*raio * raio);
	}
	return 0;
}