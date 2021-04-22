#include <stdio.h>
#include <stdlib.h>

int main(){
	  long long int N,ma[15][15],p,m,i,j;
	  
	  while(1)
	  {
	  	scanf("%lld",&N);
	  	if(N==0){
			  return 0;
		}
		p=1;
		for(i=0;i<N;i++){
			m=p;
			for(j=0;j<N;j++){
				ma[i][j]=m;
				m+=m;
			}
			p+=p;
		}
	  for(i=0;i<N;i++){
		  for(j=0;j<N;j++){
 		    
 		     if(N==1){
				  printf("%lld",ma[i][j]);
			  }
			 if(N==2){
				 if(j==0){
					 printf("%lld",ma[i][j]);
				 }else{
					 printf(" %lld",ma[i][j]);
				 }
			 }
			 if(N==3 || N==4){
				 if(j==0){
					 printf(" %lld",ma[i][j]);
				 }else{
					 printf("%3lld",ma[i][j]);
				 }
			 }
			 if(N==5){
				 if(j==0){
					 printf("%3lld",ma[i][j]);
				 }else{
					 printf("%4lld",ma[i][j]);
				 }
			 }
			 if(N==6 || N==7){
				 if(j==0){
					 printf("%4lld",ma[i][j]);
				 }else{
					 printf("%5lld",ma[i][j]);
				 }
			 }
			 if(N==8 || N==9){
				 if(j==0){
					 printf("%5lld",ma[i][j]);
				 }else{
					 printf("%6lld",ma[i][j]);
				 }
			 }
			 if(N==10){
				 if(j==0){
					 printf("%6lld",ma[i][j]);
				 }else{
					 printf("%7lld",ma[i][j]);
				 }
			 }
			 if(N==11 || N==12){
				 if(j==0){
					 printf("%7lld",ma[i][j]);
				 }else{
					 printf("%8lld",ma[i][j]);
				 }
			 }
			 if(N==13 || N==14){
				 if(j==0){
					 printf("%8lld",ma[i][j]);
				 }else{
					 printf("%9lld",ma[i][j]);
				 }
			 }
			 if(N==15){
				 if(j==0){
					 printf("%9lld",ma[i][j]);
				 }else{
					 printf("%10lld",ma[i][j]);
				 }
			 } 
		  }
		  printf("\n");
		}
		printf("\n");
	  }
	  return 0;
}