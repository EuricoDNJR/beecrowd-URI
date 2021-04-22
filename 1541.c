#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char** argv)
{
	int a,b,c;
	while(1)
	{
		scanf("%d",&a);
		if(a == 0){
			return 0;
		}
		scanf("%d %d",&b,&c);
		int res = sqrt(a*b*100/c);
		printf("%d\n",res);
	}
	return 0;
}