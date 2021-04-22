#include <stdio.h>
int main() {

	int N[100],i,maior,pos;
	for(i=0;i<100;i++){
		scanf("%d",&N[i]);
		if(i==0){
			maior=N[i];
			pos=i;
		}
		if(N[i]>maior){
			maior=N[i];
			pos=i;
		}
	}
	printf("%d\n%d\n",maior,pos+1);
return 0; 
}