#include <stdio.h>
void adiciona(char *s);
int main(int argc, char** argv)
{
	char s[102];
	scanf("%s",s);
	adiciona(s);
	printf("%s\n", s);
	return 0;
}
void adiciona(char *s){
	int i = 0, cont = 0;
	while(s[i] != '\0')
	{
		if(s[i] == '1')
			cont+=1;
		i+=1;
	}
	if(cont % 2 == 1){
		s[i + 1] = '\0';
		s[i] = '1';
	}else
	{
		s[i + 1] = '\0';
		s[i] = '0';
	}
}