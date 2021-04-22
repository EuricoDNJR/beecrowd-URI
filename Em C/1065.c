#include <stdio.h>
int main() {

	int n,par=0,i;
	for(i=0;i<5;i++){
		scanf("%d",&n);
		if(n%2==0){
			par+=1;
		}
	}
	printf("%d valores pares\n",par);
return 0; 
}