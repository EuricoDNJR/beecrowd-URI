#include <stdio.h>

int main(int argc, char** argv)
{
	float m,i,c,n;
	while(scanf("%f",&m) != EOF)
	{
		float sum1=0,sum2=0;
		for(i = 0; i < m; i++){
			scanf("%f %f",&n,&c);
			sum1 = sum1 + n * c;
			sum2 = sum2 + c;
		}
		sum2 *= 100;
		float result = sum1/sum2;
		printf("%.4f\n",result);
	}
	return 0;
}