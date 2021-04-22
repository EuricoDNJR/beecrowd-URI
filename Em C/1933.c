#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	int n1,n2;
	
	scanf("%d %d",&n1,&n2);
	if(n1 == n2){
		printf("%d\n",n1);
	}
	else if(n1 != n2){
		if(n1 < n2){
			n1 = n1 + n2;
			n2 = n1 - n2;
			n1 = n1 - n2;
		}
		printf("%d\n",n1);
	}
	return 0;
}