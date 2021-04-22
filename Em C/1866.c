#include <stdio.h>

int main(int argc, char** argv)
{
	int n,i=0,j,cont=0,s=0,v;
	scanf("%d",&n);
	
	while(i<n)
	{
		scanf("%d",&v);
		for(j=v;j>0;j--){
			if(cont==0){
				s+=1;
			}else
			{
				s-=1;
				cont=-1;
			}
			cont+=1;
		}
		printf("%d\n",s);
		s=0;
		cont=0;
		i+=1;
	}
	return 0;
}