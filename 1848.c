#include <stdio.h>
int main()
{
	int cont=0,res=0;
	char grito[10];
	while(cont<3)
	{
		scanf(" %[^\n]s",grito);
		
		if(grito[0]=='c'){
			printf("%d\n",res);
			cont+=1;
			res=0;
		}else
		{
				if(grito[2]=='*'){
					res+=1;
				}
				if(grito[1]=='*'){
					res+=2;
				}
				if(grito[0]=='*'){
					res+=4;
				}
			
		}
	}
	return 0;
}