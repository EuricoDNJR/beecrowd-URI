#include <stdio.h>
#include <stdlib.h>
float conta(char *palavra);
int main(int argc, char** argv)
{
	char palavra[10000];
	float v;
	int i = 0,n;
	scanf("%d",&n);
	while(1)
	{
		if(i == n){
			return 0;
		}
		scanf("%s",palavra);
		v = conta(palavra);
		printf("%.2f\n",v);
		i+=1;
	}
	return 0;
}
float conta(char *palavra){
	float v = 0.00;
	int i = 0;
	while(palavra[i] != '\0')
	{
		i+=1;
		v+=0.01;
	}
	return v;
}