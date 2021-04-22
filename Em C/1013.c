#include <stdio.h>
 
int main() {
 
  int a,b,c,MaiorAB;
    scanf("%d %d %d",&a,&b,&c);
    MaiorAB=(a+b+abs(a-b))/2;
    if(MaiorAB>c){
		printf("%d eh o maior\n",MaiorAB);
	}
	if(MaiorAB<c){
		printf("%d eh o maior\n",c);
	}
 
    return 0;
}