#include<stdio.h>
int main(){
    int N;
    
    while(1){
    	scanf("%d",&N);
    	if(N==2002){
			printf("Acesso Permitido\n");
			return 0;
		}else{
			printf("Senha Invalida\n");
		}
	}
    
    
    return 0;
}