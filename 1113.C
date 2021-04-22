#include <stdio.h>

int main (){
	int X, Y;
	
	while(1)
	{
		scanf("%d %d",&X,&Y);
		if(X>Y){
			printf("Decrescente\n");
		}
		if(X<Y){
			printf("Crescente\n");
		}
		if(X==Y){
			return 0;
		}
	}
return 0;
}