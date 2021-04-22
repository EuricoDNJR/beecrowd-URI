#include <stdio.h>
#include <string.h>




int main()
{
	int i,N,cont=0,j,diamante=0;
	char cadeia[1000];
	
	scanf("%d",&N);
	getchar();
	while(cont<N)
	{
		gets(cadeia);
		for(i=0;i<strlen(cadeia);i++){
			for(j=0;j<strlen(cadeia);j++){
				if(cadeia[i] == '<' && cadeia[j] == '>' && i<j){
					diamante+=1;
					cadeia[i] = '_';
					cadeia[j] = '_';
				}
			}
		}
		printf("%d\n",diamante);
		diamante = 0;
		cont+=1;
	}
	return 0;
}


