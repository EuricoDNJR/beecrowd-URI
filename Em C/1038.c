#include <stdio.h>
 
int main() {
 
    int a,c,opcao;
    float calc;
    scanf("%d %d",&a,&c);
    opcao=a;
    switch(a){
		case 1:
			calc=4.00*c;
			printf("Total: R$ %.2f\n",calc);
			break;
		case 2:
			calc=4.50*c;
			printf("Total: R$ %.2f\n",calc);
			break;
		case 3:
			calc=5.00*c;
			printf("Total: R$ %.2f\n",calc);
			break;
		case 4:
			calc=2.00*c;
			printf("Total: R$ %.2f\n",calc);
			break;
		case 5:
			calc=1.50*c;
			printf("Total: R$ %.2f\n",calc);
			break;
	}
    return 0;
}