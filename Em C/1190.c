#include <stdio.h>
int main(){
  char O;
  int limit,k=1,j,i;
  float M[12][12],soma=0;
	scanf("%c",&O);
	fflush(stdin);
	for(j=0;j<12;j++){
		  for(i=0;i<12;i++){
			  scanf("%f",&M[j][i]);
		  }
	}	  
	limit = 12-1;
	  for(j=limit;j>6;j--){
		  for(i=k;i<limit;i++){
			  soma+=M[i][j];
		  }
		  limit-=1;
		  k+=1;
	  }
	  if(O == 'S'){
		  printf("%.1f\n",soma);
	  }
	  if(O == 'M'){
		  printf("%.1f\n",soma/30.0);
	  }
  	  return 0;
}
