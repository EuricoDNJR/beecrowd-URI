#include <stdio.h>
 
int main() {
 
    int P1,C1,P2,C2,equi1,equi2;
    scanf("%d %d %d %d",&P1,&C1,&P2,&C2);
    equi1=P1*C1;
    equi2=P2*C2;
    if(equi1==equi2){
		printf("0\n");
	}
	else{
		if(equi1<equi2){
		printf("1\n");	
		}
		if(equi1>equi2){
		printf("-1\n");	
		}
	}
    return 0;
}