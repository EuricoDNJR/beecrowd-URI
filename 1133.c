#include<stdio.h>
int main(){
    int X,Y,AUX;
    scanf("%d",&X);
    scanf("%d",&Y);
    if(X>Y){
		AUX=X;
		X=Y;
		Y=AUX;
	}
    for(X=X+1;X<Y;X++){
		if(X%5==2 || X%5==3){
			printf("%d\n",X);
		}
	}
    
    
    return 0;
}