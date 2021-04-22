#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	int n,i;
	scanf("%d",&n);
	int v[n];
	
	for(i = 0; i < n;i++){
		scanf("%d",&v[i]);
	}
	int cont2 = 0, cont3=0,cont4=0,cont5=0;
	for(i = 0; i < n;i++){
		if(v[i]%2 == 0){
			cont2 += 1;
		}
		if(v[i]%3 == 0){
			cont3 += 1;
		}
		if(v[i]%5 == 0){
			cont5 += 1;
		}
		if(v[i]%4 == 0){
			cont4 += 1;
		}
	}
	printf("%d Multiplo(s) de 2\n",cont2);
	printf("%d Multiplo(s) de 3\n",cont3);
	printf("%d Multiplo(s) de 4\n",cont4);
	printf("%d Multiplo(s) de 5\n",cont5);
	return 0;
}