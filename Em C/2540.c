#include <stdio.h>

int main(int argc, char** argv)
{
	double n;
	while(scanf("%lf",&n) != EOF)
	{
		
		double result = n * 2/3, num, imp=0;
		while(n--)
		{
			scanf("%lf",&num);
			if(num == 1){
				imp += 1;
			}
		}
		if(imp >= result){
			printf("impeachment\n");
		}else
		{
			printf("acusacao arquivada\n");
		}
	}
	return 0;
}