#include <stdio.h>

int main(int argc, char** argv)
{
	int m,n;
	while(scanf("%d %d",&m,&n) != EOF)
	{
		int ma[m][n], ma2[m][n], i, j;
		
		for(i = 0; i < m; i++){
			for(j = 0; j < n; j++){
				scanf("%d",&ma[i][j]);
				ma2[i][j] = 0;
			}
		}
		
		for(i = 0; i < m; i++){
			for(j = 0; j < n; j++){
				if(ma[i][j] == 0){
					if(ma[i][j - 1] == 1 && j - 1 >= 0){
						ma2[i][j] += 1;
					}
					if(ma[i][j + 1] == 1 && j + 1 < n){
						ma2[i][j] += 1;
					}
					if(ma[i - 1][j] == 1 && i - 1 >= 0){
						ma2[i][j] += 1;
					}
					if(ma[i + 1][j] == 1 && i + 1 < m){
						ma2[i][j] += 1;
					}
				}else
				{
					ma2[i][j] = 9;
				}
			}
		}
		
		for(i = 0; i < m; i++){
			for(j = 0; j < n; j++){
				printf("%d",ma2[i][j]);
			}
			printf("\n");
		}
		
	}
	return 0;
}