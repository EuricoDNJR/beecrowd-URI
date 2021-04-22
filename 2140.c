#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	int calc,n,m,v[6] = {2,5,10,20,50,100},flag = 0,i,j;
	while(1)
	{
		scanf("%d %d",&n,&m);
		if(n == 0 && m == 0){
			return 0;
		}
		calc = m - n;
		for(i = 0; i < 6; i++){
			for(j = i + 1; j < 6; j++){
				if(v[i] + v[j] == calc){
					flag += 1;
					break;
				}
			}
			if(flag >= 1){
				break;
			}
		}
		
		if(flag == 0){
			printf("impossible\n");
		}else
		{
			printf("possible\n");
			flag = 0;
		}
	}
	return 0;
}