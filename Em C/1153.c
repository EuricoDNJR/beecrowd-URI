#include <stdio.h>

int main()
{
	int n,i,lt;
	scanf("%d",&n);
	lt=n;
	for(i=1;i<lt;i++){
		n*=i;
	}
	printf("%d\n",n);
	return 0;
}