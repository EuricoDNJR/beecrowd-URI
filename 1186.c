#include <stdio.h>

int main() {
    char o;
    float soma = 0.0,M[12][12];
    int m,l,i,j;
    scanf("%c", &o);
	
	for(i=0;i<12;i++){
		for(j=0;j<12;j++){
			scanf("%f",&M[i][j]);
		}
	}
	l=1;
	m=11;
    for(i=11;i>0;i--){
		for(j=l;j<12;j++){
			soma+=M[i][j];
		}
		l+=1;
	}
	
	if(o=='S'){
		printf("%.1f\n",soma);
	}else{
		printf("%.1f\n",soma/66.0);
	}
    return 0;
}
