#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    int m,n,calc;
    char l[2];
    while(scanf("%d:%d",&m,&n) != EOF)
	{
		   if(m < 7){
			   printf("Atraso maximo: 0\n");
		   }else
		   {
			   printf("Atraso maximo: %d\n",60 - ((28800 - (m * 3600 + n * 60))/60));
		   }	   	   	
	}
	
	return 0;
}