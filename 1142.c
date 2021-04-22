#include <stdio.h>

int main()
{
	int i,n,j,cont=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<4;j++){
			if(j==3){
				cont+=1;
				printf("PUM\n");
			}else{
				cont+=1;
				printf("%d ",cont);
			}
		}
	}
	return 0;
}