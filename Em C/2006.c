#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	int a[5],t,i;
	scanf("%d",&t);
	scanf("%d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4]);
	int cont = 0;
	for(i = 0; i < 5; i++){
		if(a[i] == t){
			cont+=1;
		}
	}
	printf("%d\n",cont);
	return 0;
}