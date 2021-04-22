#include <stdio.h>

int main (){
	int x, y,aux,soma=0;
	
	scanf("%d %d",&x,&y);
	if(x>y){
		aux=x;
		x=y;
		y=aux;
	}
	for(x=x;x<=y;x++){
		if(x%13!=0){
			soma+=x;
		}
	}
	printf("%d\n",soma);
return 0;
}