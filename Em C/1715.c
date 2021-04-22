#include <stdio.h>

int main()
{
	int m,n,cont=0,gg=0,i,j;
	
	
	scanf("%d %d",&n,&m);
	int ma[n][m];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&ma[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(ma[i][j]>=1){
				cont+=1;
			}
			if(cont==m){
				gg+=1;
			}
		}
		cont=0;
	}
	printf("%d\n",gg);
	return 0;
}