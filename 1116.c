#include <stdio.h>

int main(int argc, char** argv)
{
	int n,i=0,x,y;
	scanf("%d",&n);
	while(i<n)
	{
		scanf("%d %d",&x,&y);
		if(y!=0){
			printf("%.1f\n",(float)x/y);
		}else{
			printf("divisao impossivel\n");
		}
		i+=1;
	}
	return 0;
}