#include <stdio.h>
#include <math.h> 
int main() {
 
   int N,i,x,y,r,b,c;
 scanf("%d",&N);
 for(i=0;i<N;i++){
	 scanf("%d %d",&x,&y);
	 r=(3*x)*(3*x)+pow(y,2);
	 b=2*pow(x,2)+(5*y)*(5*y);
	 c=-100*x+pow(y,3);
	 if(r>b && r>c){
		 printf("Rafael ganhou\n");
	 }
     if(b>r && b>c){
		 printf("Beto ganhou\n");
	 }
	 if(c>r && c>b){
		 printf("Carlos ganhou\n");
	 }
	 
 }
 
    return 0;
}