#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv)
{
	int s,t,f;
	scanf("%d %d %d",&s,&t,&f);
	if(s + t > 24){
		printf("%d\n",s + t - 24 + f);
	}else
	{
		if(s + t + f < 0){
			printf("%d\n",s + t + f + 24);
		}else
		{
			printf("%d\n",s + t + f);
		}
	}
	return 0;
}