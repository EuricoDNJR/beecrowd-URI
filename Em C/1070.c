#include <stdio.h>
int main() {

	int X,cont=0;
	scanf("%d",&X);
	for(;X<10000;X++){
		if(cont==6){
			break;	
		}
		if(X%2!=0){
			printf("%d\n",X);
			cont+=1;
		}
	}
	
return 0; 
}