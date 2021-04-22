#include <stdio.h>

int main(int argc, char** argv)
{
	int N,M;
	scanf("%d %d",&N,&M);
	int ma[N][M],i,j;
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			scanf("%d",&ma[i][j]);
		}
	}
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			if(ma[i][j] == 42){
				if(ma[i-1][j-1] == 7){
                	if(ma[i-1][j] == 7){
						if(ma[i-1][j+1] == 7){
                			if(ma[i][j-1] == 7){
                				if(ma[i][j+1] == 7){
                					   if(ma[i+1][j-1] == 7){
                						   	if(ma[i+1][j] == 7){
                								if(ma[i+1][j+1] == 7){
                										printf("%d %d\n",i+1,j+1);
                										return 0;
												}   	   
											}   
       	  	  	  	  	  	  	  	  }	
								}
							}
						}
					}
				}
			}
		}
	}
	printf("0 0\n");
	return 0;
}