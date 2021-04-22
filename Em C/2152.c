#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	int t,cont=0,h,m,o;
	scanf("%d",&t);
	while(1)
	{
		if(cont == t){
			return 0;
		}
		scanf("%d %d %d",&h,&m,&o);
		if(h < 10){
			if(m < 10){
				printf("0%d:0%d ",h,m);
			}else
			{
				printf("0%d:%d ",h,m);
			}
		}else
		{
			if(m < 10){
				printf("%d:0%d ",h,m);
			}else
			{
				printf("%d:%d ",h,m);
			}
		}
		if(o == 0){
			printf("- A porta fechou!\n");
		}else
		{
			printf("- A porta abriu!\n");
		}
		cont+=1;
	}
	return 0;
}