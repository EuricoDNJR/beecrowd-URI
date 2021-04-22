#include <stdio.h>
int main() {

	int par=0,i;
	float n;
	for(i=0;i<6;i++){
		scanf("%f",&n);
		if(n>0){
			par+=1;
		}
	}
	printf("%d valores positivos\n",par);
return 0; 
}