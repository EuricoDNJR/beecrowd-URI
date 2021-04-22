#include <stdio.h>
 
int main() {
 
    int n, l,i,j, cont=0;
    while(scanf("%d %d",&n,&l) != EOF){
	    while(n--){
	    	scanf("%d %d",&i,&j);
	        if(i == l){
	            if(j == 0){
	                cont+=1;
	            }
	        }
	    }
	    printf("%d\n",cont);
	    cont = 0;
	}
    return 0;
}