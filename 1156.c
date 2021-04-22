#include <stdio.h>

int main(int argc, char** argv)
{
	float s=1.0,j=2.0,i;
	for(i=3.0;i<=39.0;i+=2.0){
		s+=i/j;
		j*=2.0;
	}
	printf("%.2f\n",s);
	
	return 0;
}