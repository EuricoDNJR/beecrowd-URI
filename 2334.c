#include <stdio.h>

int main(int argc, char** argv)
{
	unsigned long long int n;
	while(1)
	{
		scanf("%llu",&n);
		if(n == -1){
			return 0;
		}
		if(n == 0){
			printf("0\n");
		}else
		{
			printf("%llu\n",n-1);
		}
	}
	return 0;
}