#include <stdio.h>

int main(int argc, char** argv)
{
	int n,amin,amax,a;
	
	while(scanf("%d %d %d",&n,&amin,&amax) != EOF)
	{
		int cont = 0;
		while(n--)
		{
			scanf("%d",&a);
			if(a >= amin && a <= amax){
				cont+=1;
			}
		}
		printf("%d\n",cont);
	}
	return 0;
}