#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv)
{
	int n,i,menor,pos;
	scanf("%d",&n);
	int v[n];
	for(i  = 0; i < n; i++){
		scanf("%d",&v[i]);
	}
	for(i  = 0; i < n; i++){
		if(i == 0){
			menor = v[i];
			pos = i + 1;
		}
		else
		{
			if(menor > v[i]){
				menor = v[i];
				pos = i + 1;
			}
		}
	}
	printf("%d\n",pos);
	return 0;
}