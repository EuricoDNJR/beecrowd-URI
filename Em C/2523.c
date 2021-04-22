#include <stdio.h>

int main(int argc, char** argv)
{
	char s[27];
	
	while(scanf("%s",s) != EOF)
	{
		setbuf(stdin, NULL);
		int n;
		scanf("%d",&n);
		int v;
		int cont = 0;
		while(cont < n)
		{
			scanf("%d",&v);
			cont+=1;
			printf("%c",s[v - 1]);
		}
		printf("\n");
	}
	return 0;
}