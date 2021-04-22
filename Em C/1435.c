#include <stdio.h>
#include <stdlib.h>

int main(){
	  int N,ma[100][100],p,q,r,m,i,j;
	  
	  while(1)
	  {
	  	scanf("%d",&N);
		  if(N==0){
			  return 0;
		  }
		  p=N/2;
		  if(N%2==1){
			  p+=1;
		  }
		  q=0;
		  r=N-1;
		  for(m=1;m<=p;m++){
			  for(i=q;i<=r;i++){
				  for(j=q;j<=r;j++){
					  ma[i][j]=m;
				  }
			  }
			  q+=1;
			  r-=1;
		  }
		  for(i=0;i<N;i++){
			  for(j=0;j<N;j++){
				  if(j==0){
					  printf("%3d",ma[i][j]);
				  }else
				  {
					  printf(" %3d",ma[i][j]);
				  }
			  }
			  printf("\n");
		  }
		  printf("\n");
	  }
	  return 0;
}