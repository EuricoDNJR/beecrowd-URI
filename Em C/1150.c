#include <stdio.h>
int main()
{
	int X,Z,cont=0,i;
    scanf("%d",&X);
    scanf("%d",&Z);
    if(Z<=X){
		do{
			scanf("%d",&Z);
		}while(Z<=X);
	}
	i=X+1;
	while(1)
	{
		X+=i;
		cont+=1;
		if(X>Z){
			cont+=1;
			break;
		}
		i+=1;
	}
	printf("%d\n",cont);
    return 0;
}