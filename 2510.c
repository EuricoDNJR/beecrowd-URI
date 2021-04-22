#include <stdio.h>

int main(int argc, char** argv)
{
	int t;
	char s[30];
	scanf("%d",&t);
	while(t--)		
	{
		scanf("%s",s);
		setbuf(stdin,NULL);
		printf("Y\n");
	}
	return 0;
}