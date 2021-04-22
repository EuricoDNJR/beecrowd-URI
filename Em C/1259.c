#include <stdio.h>
#include <stdlib.h>
int compara(const void *a, const void *b);
int main(){
    int n, i, num, par, impar;
    int Vp[100000];
    int Vi[100000];
    scanf("%d", &n);
    par = 0;
    impar = 0;
    
    for(i = 0; i < n; i++){
        scanf("%d", &num);
        if(num%2 == 0){
            Vp[par] = num;
            par+=1;
        }else{
            Vi[impar] = num;
            impar+=1;
        }
    }

	qsort(Vp, par, sizeof(int), compara);
	qsort(Vi, impar, sizeof(int), compara);
	
    for(i = 0; i < par; i++){
        printf("%d\n",Vp[i]);
    }
    
    for(i = impar-1; i >= 0; i--){
        printf("%d\n",Vi[i]);
    }
    
    return 0;
}
int compara(const void *a, const void *b){
	if(*(int*)a > *(int*)b){
		return 1;
	}
	else if(*(int*)a < *(int*)b){
		return -1;
	}
	else{
		return 0;
	}
	
	
	
	
}