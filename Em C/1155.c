#include <stdio.h>

int main(int argc, char** argv)
{
	int i;
	float s=1;
	for(i=2;i<=100;i++){
		s+=(1.0/i);
	}
	printf("%.2f\n",s);
	return 0;
}