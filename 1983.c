#include <stdio.h>

int main()
{
	int i=0,n,mat,maiorm=0;
	float nota,maiorn=0;
	scanf("%d",&n);
	while(i<n)
	{
		scanf("%d %f",&mat,&nota);
		if(i==0){
			maiorm = mat;
			maiorn = nota;
		}else
		{
			if(nota>maiorn){
				maiorn = nota;
				maiorm = mat;
			}
		}

							 			  		
		i+=1;
	}
	if(maiorn>=8){
		printf("%d\n",maiorm);
	}else
	{
		printf("Minimum note not reached\n");
	}
	return 0;
}