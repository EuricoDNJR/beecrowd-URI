#include <stdio.h>
 
int main() {
 
    int temp,veloc;
	float distancia;
	scanf("%d",&temp);
	scanf("%d",&veloc);
	distancia=temp*veloc;
	printf("%.3f\n",distancia/12);
 
    return 0;
}