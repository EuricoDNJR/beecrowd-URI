#include <stdio.h>

int main(int argc, char** argv)
{
	long long int x,m;
	
	while(1)
	{
		scanf("%lld %lld",&x,&m);
		if(x == 0 && m == 0)
			return 0;
		printf("%lld\n",x * m);
	}
	return 0;
}