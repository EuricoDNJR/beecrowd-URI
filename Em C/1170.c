#include <stdio.h>
int dias(float c);
int day = 0;
int cont = 0;
int main(int argc, char** argv)
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		float c;
		scanf("%f",&c);
		if(c == 1){
			cont = 1;
		}
		printf("%d dias\n",dias(c));
		cont = 0;
		day = 0;
	}
	return 0;
}
int dias(float c){
	if(cont == 1){
		return 0;
	}
	if(c * 0.5 <= 1){
		day += 1;
		return day;
	}
	else{
		day += 1;
		return dias(c-c*0.5);
	}
}