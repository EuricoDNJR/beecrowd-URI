#include <stdio.h>

int main()
{
	int A, B, C, DIFAB, DIFBC;
	scanf("%d %d %d", &A, &B, &C);
	
	DIFAB = A - B;
	DIFBC = B - C;

	if(DIFAB < 0)
	{
		DIFAB *= -1;
	}
	if(DIFBC < 0)
	{
		DIFBC *= -1;
	}

	if(B < A && (C > B || B == C))
	{
		printf(":)\n");
	}
	else if(B > A && (C < B || B == C))
	{
		printf(":(\n");
	}
	else if(B > A && C > B && DIFBC < DIFAB)
	{
		printf(":(\n");
	}
	else if(B > A && C > B && DIFBC >= DIFAB)
	{
		printf(":)\n");
	}
	else if(A > B && C < B && DIFBC < DIFAB)
	{
		printf(":)\n");
	}
	else if(A > B && C < B && DIFBC >= DIFAB)
	{
		printf(":(\n");
	}
	else if(A == B && C > B)
	{
		printf(":)\n");
	}
	else if(A == B && C < B)
	{
		printf(":(\n");
	}
	else if(A==B && B==C){
		printf(":(\n");
	}
	return 0;
}
