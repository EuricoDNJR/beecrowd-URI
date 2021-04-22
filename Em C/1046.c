#include <stdio.h>
int main() {

	int x,y,c;
	scanf("%d %d",&x,&y);
	if(x>y){
		c=24-x+y;
	}else{
		if(x<y){
			c=y-x;
		}else{
			c=24;
		}
	}
	printf("O JOGO DUROU %d HORA(S)\n",c);
	
return 0; 
}