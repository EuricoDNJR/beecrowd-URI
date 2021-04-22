#include <stdio.h>

int main(int argc, char** argv)
{
	
	int N,m[70][70],i,j;
	while(scanf("%d",&N)!=EOF)
	{
		for(i=0;i<N;i++){
			for(j=0;j<N;j++){
				m[i][j]=3;
			}
		}
		for(i=0;i<N;i++){
			for(j=0;j<N;j++){
				if(i==j){
					m[i][j]=1;
				}
			}
		}

			for(i=0,j=0;j<N;i++,j++){
					m[i][N-1-j] = 2;
					
				
			}
		
		
		for(i=0;i<N;i++){
			for(j=0;j<N;j++){
				printf("%d",m[i][j]);
			}
			printf("\n");
		}
		
	}
	return 0;
}