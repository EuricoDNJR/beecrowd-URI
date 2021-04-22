#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,X,i;
	
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%d",&X);
		if(X<0 && X%2==0){
			printf("EVEN NEGATIVE\n");
		}else{
			if(X<0 && (X%2==1 || X%2==-1)){
			   printf("ODD NEGATIVE\n");	
			}
			if(X>0 && X%2==0){
			printf("EVEN POSITIVE\n");
		    }
		    if(X>0 && X%2==1){
			printf("ODD POSITIVE\n");
		    }
		    if(X==0){
			printf("NULL\n");
		    }
		}
	}
    return 0;
}