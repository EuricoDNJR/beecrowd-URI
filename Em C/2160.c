#include <stdio.h>
#include <stdlib.h>
int conta(char *s);
int main(int argc, char** argv)
{
	char s[501];
	
	scanf("%[^\n]s",s);
	int v;
	v = conta(s);
	if(v > 80){
		printf("NO\n");
	}else
	{
		printf("YES\n");
	}
	return 0;
}
int conta(char *s){
	int i = 0;
	while(s[i] != '\0')
	{
		i += 1;
	}
	return i;
}