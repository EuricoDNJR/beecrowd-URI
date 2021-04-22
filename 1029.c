#include <stdio.h>
int result = 0;
int num_calls = 0;
int fib(int n);
int main(int argc, char** argv)
{
	int r,n;
	scanf("%d",&r);
	while(r--)
	{
		scanf("%d",&n);
		result = fib(n);
		printf("fib(%d) = %d calls = %d\n",n,num_calls - 1,result);
		num_calls = 0;
		result = 0;
	}
	return 0;
}
int fib(int n){
	num_calls += 1;
	if(n == 0) return 0;
	if(n == 1) return 1;
	return fib(n - 1) + fib(n - 2);
}