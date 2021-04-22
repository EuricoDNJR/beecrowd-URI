#include <stdio.h>
#include <stdlib.h>

int main()
{
    
	int N, X,i,cont=0,cont1=0;
	
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%d",&X);
		if(X>=10 && X<=20){
			cont+=1;
		}
		if(X<10 || X>20){
			cont1+=1;
		}
	}
	printf("%d in\n",cont);
	printf("%d out\n",cont1);
	
	
	
	
	
	return 0;
}