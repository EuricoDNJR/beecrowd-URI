#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	int testes,i,gols,g = 0,r = 0,b = 0,j;
	char t1,t2;
	scanf("%d",&testes);
	for(i = 0; i < testes; i++){
		scanf("%d",&gols);
		for(j = 0; j < gols; j++){
			do{
							t1 = getchar();
					}while( !(64 < t1 && t1 < 91 ));
					
					do{
							t2 = getchar();
					}while( !(64 < t2 && t2 < 91 ));	
			if(t1 == 'G'){
				if(t2 == 'R'){
					g += 1;
				}else
				{
					g += 2;
				}
			}
			if(t1 == 'B'){
				if(t2 == 'G'){
					b += 1;
				}else
				{
					b += 2;
				}
			}
			if(t1 == 'R'){
				if(t2 == 'B'){
					r += 1;
				}else
				{
					r += 2;
				}
			}
		}
		
		if(g == r && r == b){
			printf("trempate\n");
		}else if(g == b && b > r){
			printf("empate\n");
		}else if(g == r && r > b){
			printf("empate\n");
		}else if(b == r && r > g){
			printf("empate\n");
		}else if(g > b && g > r){
			printf("green\n");
		}else if(b > g && b > r){
			printf("blue\n");
		}else if(r > g && r > b){
			printf("red\n");
		}
		g = 0;
		b = 0;
		r = 0;
	}
	return 0;
}