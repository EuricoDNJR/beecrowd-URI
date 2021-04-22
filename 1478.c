#include <stdio.h>
#include <stdlib.h>

int main(){
	  int N,ma[100][100],p,m,i,j;
	  
	  while(1)
	  {
	  	scanf("%d",&N);
	  	if(N==0){
			  return 0;
		  }
		for(i=0;i<N;i++){
			p=i;
			m=1;
			for(j=0;j<=i;j++,p--){
				ma[i][j]=p+1;
			}  
			for(j=i+1;j<N;j++,m++){
				ma[i][j]=m+1;
			}
		}
		for(i=0;i<N;i++){
			for(j=0;j<N;j++){
				if(j==0){
					printf("%3d",ma[i][j]);
				}else{
					printf(" %3d",ma[i][j]);
				}
			}
			printf("\n");
		}
		printf("\n");
		
		
		
		
	  }
	  return 0;
}