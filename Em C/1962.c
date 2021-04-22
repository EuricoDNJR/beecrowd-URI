#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	int n, t,cont = 0;
	
	scanf("%d",&n);
	while(1)
	{	
		if(cont == n){
			return 0;
		}
		scanf("%d",&t);
		cont += 1;
		if(t < 2015){
			printf("%d D.C.\n",2015 - t);
		}
		else if(t == 2015){
			printf("1 A.C.\n");
		}
		else if(t > 2015)
		{
			printf("%d A.C.\n",t - 2015 + 1);
		}
		
	}
	return 0;
}