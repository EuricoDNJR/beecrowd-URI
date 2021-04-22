#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N[10],i=0;
	scanf("%d",&N[i]);
	
	for(i=0;i<10;i++){
			if(i==0){
			printf("N[%d] = %d\n",i,N[i]);
			}else{
 				N[i]=N[i-1]+N[i-1];
				printf("N[%d] = %d\n",i,N[i]);
			}
			
	}
    return 0;
}
	