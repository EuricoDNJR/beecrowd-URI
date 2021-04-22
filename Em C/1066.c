#include <stdio.h>
int main() {

	int n,par=0,impar=0,pos=0,neg=0,i;
	for(i=0;i<5;i++){
		scanf("%d",&n);
		if(n%2==0){
			par+=1;
		}
		if(n%2!=0){
			impar+=1;
		}
		if(n<0){
			neg+=1;
		}
		if(n>0){
			pos+=1;
		}
	}
	printf("%d valor(es) par(es)\n",par);
	printf("%d valor(es) impar(es)\n",impar);
	printf("%d valor(es) positivo(s)\n",pos);
	printf("%d valor(es) negativo(s)\n",neg);	
return 0; 
}