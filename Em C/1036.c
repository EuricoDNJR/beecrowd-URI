#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double A, B, C,delta,R1,R2;
    scanf("%lf %lf %lf",&A,&B,&C);
	delta=pow(B,2)-4*A*C;
    R1=(-B+sqrt(delta))/(2*A);
    R2=(-B-sqrt(delta))/(2*A);
    if(2*A==0 || delta<0){
		printf("Impossivel calcular\n");
	}else{
		printf("R1 = %.5lf\n",R1);
		printf("R2 = %.5lf\n",R2);
	}
    
    return 0;
}
