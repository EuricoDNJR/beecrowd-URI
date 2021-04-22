#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char** argv)
{
	int R1,X1,Y1,R2,X2,Y2;
	float distancia;
	while(scanf("%d %d %d %d %d %d",&R1,&X1,&Y1,&R2,&X2,&Y2) != EOF)
	{
		distancia = sqrt(pow((X2-X1),2)+pow((Y2-Y1),2));
		if(R1 >= distancia + R2){
			printf("RICO\n");
		}else
		{
			printf("MORTO\n");
		}
	}
	return 0;
}