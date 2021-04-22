#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N[20],aux;
	int i;
    for(i=0;i<20;i++){
		scanf("%d",&N[i]);
	}
	for(i=0;i<10;i++){
		aux=N[i];
		N[i]=N[19-i];
		N[19-i]=aux;	
	}
	 for(i=0;i<20;i++){
		printf("N[%d] = %d\n",i,N[i]);
	}
    return 0;
}
	