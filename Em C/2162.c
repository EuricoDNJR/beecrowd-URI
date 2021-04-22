#include <stdio.h>
int main(void){
    int n, i, cont;
    cont = 0;
    scanf("%i", &n);
    int h[n];
    for (i = 0; i < n; i++){
        scanf("%i", &h[i]);
	}
    if (n > 2){
        for (i = 1; i+1 < n; i++){
            if(!((h[i] > h[i-1] && h[i] > h[i+1]) || (h[i] < h[i-1] && h[i] < h[i+1]))){
                cont = 1;
                if (cont == 1){
                	printf("0\n");
                	return 0;
				}
            }
        }
    }
    else{
        if (h[1] != h[0]){
            cont = 0;
		}else{
			cont=1;
		}
    }
    if(cont==1){
		printf("0\n");
	}else{
		printf("1\n");
	}
    return 0;
}