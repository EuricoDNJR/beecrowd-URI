#include <stdio.h>
 
int main() {
 
    int C,N,M,i;
 scanf("%d",&C);
 for(i=0;i<C;i++){
scanf("%d %d",&N,&M);
 if(N%M==0){
 printf("%d\n",N/M);
 }else{
	printf("%d\n",N/M+1); 
 }
 } 
 
    return 0;
}