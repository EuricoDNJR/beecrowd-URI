#include <stdio.h>

int main(){
	long long int estrela[1000000],cont[1000000]={1},atacados=0,naoroubados=0,N,i=0;
	scanf("%lld",&N);
	for(i=0;i<N;i++){
		scanf("%lld",&estrela[i]);
	}
	for(i=0;i<N;i++){
		if(estrela[i]==0){
			break;
		}
		if(i==0){
			if(estrela[i]%2==1){	
				estrela[i]-=1;
				cont[i]+=1;
			}else{
				estrela[i]-=1;
				break;
			}
		}else{
			if(estrela[i]%2==1){
				estrela[i]-=1;
				cont[i]+=1;
			}else{
				estrela[i]-=1;
				cont[i]+=1;
				i-=2;
			}
		}
		if(i==N-1){
			break;
		}
	}
	for(i=0;i<N;i++){
		if(cont[i]!=0){
			atacados+=1;
		}
		naoroubados+=estrela[i];
	}
	printf("%lld %lld\n",atacados,naoroubados);
	return 0;
}