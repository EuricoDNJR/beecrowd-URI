#include <stdio.h>
int main() {

	int X,Y;
	scanf("%d",&X);
	for(Y=1;Y<=X;Y++){
		if(Y%2!=0){
			printf("%d\n",Y);
		}
	}
	
return 0; 
}