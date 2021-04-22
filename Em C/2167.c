#include <stdio.h>
#include <stdlib.h>
int conta(char *s);
int main(int argc, char** argv)
{
	int r[10000], t,g = 0, i; 
	scanf("%d",&t);
	for(i = 0; i < t; i++){
		scanf("%d",&r[i]);
		if(i > 0){
			if(r[i] < r[i - 1]){
				g = i + 1;
				break;
			}
		}
	}
	printf("%d\n", g);
	
	
	return 0;
}
