#include <stdio.h>

int main (){
	float x, y;
	
	while(1)
	{
		scanf("%f %f",&x,&y);
		if(x==0 || y==0){
			return 0;
		}
		if(x > 0.0 && y > 0.0){
        printf("primeiro\n");
    }else if(x < 0.0 && y > 0.0){
        printf("segundo\n");
    }else if(x < 0.0 && y < 0.0){
        printf("terceiro\n");
    }else if(x > 0.0 && y < 0.0){
        printf("quarto\n");
    }
	}
return 0;
}