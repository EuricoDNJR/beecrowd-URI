#include <stdio.h>
#include <stdlib.h>

int main() {

   int gg=0, N,valor=1,portacarro,i;
   
   
   scanf("%d", &N);
   for(i=0;i<N;i++){
	   scanf("%d",&portacarro);
	   if(valor!=portacarro){
		   gg+=1;
	   }
   }
   printf("%d\n",gg);

    
    return 0;
}