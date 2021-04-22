#include <stdio.h>

int main() {
    int L,i,maior;
    
    while(scanf("%d",&L)!= EOF)
	{
		int v[L];
		for(i=0;i<L;i++){
			scanf("%d",&v[i]);
			if(i==0){
				maior = v[i];
			}
			if(v[i]>maior){
				maior = v[i];
			}
		}
		if(maior<10){
			printf("1\n");
		}
		else if(maior>=10 && maior<20){
			printf("2\n");
		}
		else if(maior>=20){
			printf("3\n");
		}
		
	}
    return 0;
}
