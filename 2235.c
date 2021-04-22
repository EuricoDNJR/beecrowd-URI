#include <stdio.h>

int main(int argc, char** argv)
{
	int A,B,C;
	
	scanf("%d %d %d",&A,&B,&C);
	
	if(A == B || B == C || A == C || A + B == C || A + C == B || B + C == A){
		printf("S\n");
	}else
	{
		printf("N\n");
	}
	return 0;
}