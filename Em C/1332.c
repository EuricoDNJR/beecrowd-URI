#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	char s1[] = "one", s2[] = "two", s3[] = "three";
	int i = 0, erro = 0, j = 0, n;
	scanf("%d", &n);
	char s[6];
	setbuf(stdin, NULL);
	while(i < n)
	{
		setbuf(stdin, NULL);
		scanf("%s", s);
		setbuf(stdin, NULL);
		while(j < 3)
		{
			if(s1[j] != s[j]){
				erro += 1;
			}
			j += 1;
		}
		if(erro == 1 || erro == 0){
			printf("1\n");
			erro = 0;
		}else
		{
			erro = 0;
			j = 0;
			while(j < 3)
			{
				if(s2[j] != s[j]){
					erro += 1;
				}
				j += 1;
			}
			if(erro == 1 || erro == 0){
				printf("2\n");
				erro = 0;
			}else{
	   			erro = 0;
	   			j = 0;
	   			while(j < 5){
					if(s3[j] != s[j]){
						erro += 1;
					}
					j += 1; 
				}
				if(erro == 1 || erro == 0){
					printf("3\n");
				}
			}
		}
		i += 1;
		j = 0;
		erro = 0;
	}
	return 0;
}