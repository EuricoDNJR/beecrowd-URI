#include <stdio.h>
 
int main() {
 
   double dist,gast;
	scanf("%lf",&dist);
	scanf("%lf",&gast);
	printf("%.3lf km/l\n",dist/gast);
 
    return 0;
}