#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv)
{
	int t,cont = 0, r1,r2;
	scanf("%d",&t);
	while(cont < t)
	{
		scanf("%d %d",&r1,&r2);
		printf("%d\n",r1 + r2);
		cont+=1;
	}
	return 0;
}