#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	int n, i, quant;
	float soma = 0,p;
	scanf("%d",&n);
	for (i = 0; i < n; i++)
	{
		scanf("%f %d",&p, &quant);
		if (p == 1001)
		{
			soma += 1.50 * quant;
		}
		else if (p == 1002)
		{
			soma += 2.50 * quant;
		}
		else if (p == 1003)
		{
			soma += 3.50 * quant;
		}
		else if (p == 1004)
		{
			soma += 4.50 * quant;
		}
		else if (p == 1005)
		{
			soma += 5.50 * quant;
		}
	}
	printf("%.2f\n", soma);
	return 0;
}