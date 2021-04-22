#include <stdio.h>
int main() {

	int par=0,i;
	float media,n;
	for(i=0;i<6;i++){
		scanf("%f",&n);
		if(n>0){
			par+=1;
			media+=n;
		}
	}
	printf("%d valores positivos\n",par);
	printf("%.1f\n",media/par);
return 0; 
}