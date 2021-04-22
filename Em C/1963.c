#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    double a , b, c;
	
	scanf("%lf %lf",&a,&b);
	c = b - a;
	printf("%.2lf%%\n",(c/a)*100.00);
	
	return 0;
}