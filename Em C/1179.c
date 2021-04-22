#include <stdio.h>

int main(){
	int n,j=0,k=0,m,vpar[5],vimpar[5],i;
	
	for(i=0;i<15;i++){
		scanf("%d",&n);
		if(n%2==0){
			vpar[j]=n;
			j++;
			if(j==5){
				for(m=0;m<5;m++){
					printf("par[%d] = %d\n",m,vpar[m]);
				}
				j=0;
			}
		}
		if(n%2==1 || n%2==-1){
			vimpar[k]=n;
			k++;
			if(k==5){
				for(m=0;m<5;m++){
					printf("impar[%d] = %d\n",m,vimpar[m]);
				}
				k=0;
			}
		}
	}
	if(k>0 || j>0){
		for(i=0;i<k;i++){
			printf("impar[%d] = %d\n",i,vimpar[i]);
		}
		for(i=0;i<j;i++){
			printf("par[%d] = %d\n",i,vpar[i]);
		}
	}
		
	
	return 0;
}