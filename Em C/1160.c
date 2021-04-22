#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv)
{
	int cont = 0, t,popa,popb,anos;
	double g1,g2;
	scanf("%d",&t); 
	while(cont < t)
	{
		anos = 0;
		scanf("%d %d %lf %lf",&popa,&popb,&g1,&g2);
		while(1)
		{	
			if(anos > 100){
				printf("Mais de 1 seculo.\n");
				break;
			}
			if(popa > popb){
				printf("%d anos.\n",anos);
				break;
			}
			popa += popa * g1/100;
			popb += popb * g2/100;
			anos += 1;
		}
		cont += 1;
	}
	return 0;
}