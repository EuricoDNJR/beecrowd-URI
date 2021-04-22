#include <stdio.h>

int main()
{
	int X,Y,i,j;
	
	scanf("%d %d",&X,&Y);
	
	for(i=1,j=1;j<=Y;i++,j++){
		if(i==X){
			printf("%d\n",j);
			i=0;
		}else
		{
			printf("%d ",j);
		}
		
	}
	return 0;
}
