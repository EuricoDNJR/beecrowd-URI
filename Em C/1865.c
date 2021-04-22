#include <stdio.h>
#include <string.h>
int main(int argc, char** argv)
{
	int n,i=0,fc;
	char baitola[15];
	scanf("%d",&n);
	while(i<n)
	{
		scanf("%s %d",baitola,&fc);
		if(strcmp(baitola,"Thor")==0){
			printf("Y\n");
		}else
		{
			printf("N\n");
		}
		fflush(stdin);
		i+=1;
	}
	
	return 0;
}