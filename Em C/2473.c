#include <stdio.h>
 
int main() {
 
   int nf1,nf2,nf3,nf4,nf5,nf6,n1,n2,n3,n4,n5,n6,vetor[6],vetor2[6],cont=0,i,j;
    scanf("%d %d %d %d %d %d",&nf1,&nf2,&nf3,&nf4,&nf5,&nf6);
    vetor[0]=nf1;
    vetor[1]=nf2;
    vetor[2]=nf3;
    vetor[3]=nf4;
    vetor[4]=nf5;
    vetor[5]=nf6;
    scanf("%d %d %d %d %d %d",&n1,&n2,&n3,&n4,&n5,&n6);
    vetor2[0]=n1;
    vetor2[1]=n2;
    vetor2[2]=n3;
    vetor2[3]=n4;
    vetor2[4]=n5;
    vetor2[5]=n6;
    for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			if(vetor[i]==vetor2[j]){
				cont+=1;
			}
		}
		j=0;
	}
	if(cont<3){
		printf("azar\n");
	}
	else
	{
		if(cont==3){
		printf("terno\n");
	}
		if(cont==4){
		printf("quadra\n");
	}
		if(cont==5){
		printf("quina\n");
	}
		if(cont==6){
		printf("sena\n");
	}
	}
    
    return 0;
}