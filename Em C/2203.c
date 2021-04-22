#include <stdio.h>
#include <math.h>

double dist(double xf, double yf, double xi, double yi);

int main(int argc, char** argv)
{
	double xf, yf, xi, yi, vi, r1, r2;
	
	while(scanf("%lf %lf %lf %lf %lf %lf %lf", &xf, &yf, &xi, &yi, &vi, &r1, &r2) != EOF)
	{
			if(dist(xf, yf, xi, yi) + vi * 1.5 > r1 + r2){
				printf("N\n");
			}else
			{
				printf("Y\n");
			}  		  		  		
	}
	return 0;
}
double dist(double xf, double yf, double xi, double yi){
	return sqrt(pow((xi - xf),2) + pow((yi - yf),2));
}
