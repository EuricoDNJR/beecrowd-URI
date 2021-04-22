#include <stdio.h>
void roda(int t);
int main(int argc, char** argv)
{
	int t;
	
	while(1)
	{
		scanf("%d",&t);
		if(t == 0){
			return 0;
		}else
		{
			roda(t);
		}
	}
	return 0;
}
void roda(int t){
	int n;
	while(t--)
	{
		scanf("%d",&n);
		if(n % 2 == 0)
			printf("%d\n",n * 2 - 2);
		else
			printf("%d\n",n * 2 - 1);
	}
}