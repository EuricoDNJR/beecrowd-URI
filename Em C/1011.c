#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double R,pi=3.14159,calc;
  
    scanf("%lf",&R);
	calc=(4.0/3)*pi*pow(R,3);
    printf("VOLUME = %.3lf\n",calc);
  
    
    return 0;
}