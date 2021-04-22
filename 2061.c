#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	int N,M,i;
	char dec[7];
	scanf("%d %d",&N,&M);

	for (i = 0; i < M; i++)
	{
		scanf("%s",dec);
		if(strcmp(dec, "clicou") == 0){
			N-=1;
		}else if(strcmp(dec, "fechou") == 0){
			N+=1;
		}
		setbuf(stdin, NULL);
	}
	printf("%d\n", N);

	return 0;
}