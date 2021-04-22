#include <stdio.h>

int main(){
	int e=1,d=10,i,j;
	double M[12][12],soma=0;
	char O;
	scanf("%c",&O);
	
	for(i=0;i<12;i++){
		for(j=0;j<12;j++){
			scanf("%lf",&M[i][j]);
		}
	}
	for(i=11;i>6;i--){
		for(j=e;j<=d;j++){
			soma+=M[i][j];
		}
		e+=1;
		d-=1;
	}
	if(O=='S'){
		printf("%.1lf\n",soma);
	}else{
		printf("%.1lf\n",soma/30);
	}
	
	
		
	
	return 0;
}