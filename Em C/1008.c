#include <stdio.h>
 
int main() {
 
    int NUMBER, vphora;
	float nhoras, SALARY;
	scanf("%d", &NUMBER);
	scanf("%d", &vphora);
	scanf("%f", &nhoras);
	SALARY = vphora*nhoras;
	printf("NUMBER = %d\n", NUMBER);
	printf("SALARY = U$ %.2f\n", SALARY);
 
    return 0;
}