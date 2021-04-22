#include <stdio.h>
#include <string.h>
int main(int argc, char** argv)
{
	int t, quant, calc = 0;
	while(1)
	{
		scanf("%d",&t);
		if(t == 0){
			return 0;
		}
		while(t--)
		{
			char s[100];
			scanf("%d %[^\n]s",&quant,s);
			
			setbuf(stdin,NULL);
			if(strcmp(s,"suco de laranja") == 0){
				calc += 120 * quant;
			}
			if(strcmp(s,"morango fresco") == 0){
				calc += 85 * quant;
			}
			if(strcmp(s,"mamao") == 0){
				calc += 85 * quant;
			}
			if(strcmp(s,"goiaba vermelha") == 0){
				calc += 70 * quant;
			}
			if(strcmp(s,"manga") == 0){
				calc += 56 * quant;
			}
			if(strcmp(s,"laranja") == 0){
				calc += 50 * quant;
			}
			if(strcmp(s,"brocolis") == 0){
				calc += 34 * quant;
			}
		}
		if(calc > 130){
			printf("Menos %d mg\n",calc - 130);
		}
		else if(calc < 110){
			printf("Mais %d mg\n",110 - calc);
		}
		else
		{
			printf("%d mg\n",calc);
		}
		calc = 0;
	}
	return 0;
}