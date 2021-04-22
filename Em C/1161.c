#include <stdio.h>
unsigned long long int fatorial(unsigned long long int n);
int main(int argc, char** argv)
{
	unsigned long long int m,n;
	while(scanf("%llu %llu",&m,&n) != EOF)
	{
		printf("%llu\n", fatorial(m) + fatorial(n));
	}
	return 0;
}
unsigned long long int fatorial(unsigned long long int n){
	if(n == 0)
		return 1;
	return n * fatorial(n - 1);
}