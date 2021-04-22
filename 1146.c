#include<stdio.h>
int main(){
    int N,i;
    
    while(1){
    	scanf("%d",&N);
    	if(N==0){
			return 0;
		}
		for(i=1;i<=N;i++){
			if(i==N){
				   printf("%d\n",i);
				   break;	
			}
			printf("%d ",i);
		}
	}
    
    
    return 0;
}