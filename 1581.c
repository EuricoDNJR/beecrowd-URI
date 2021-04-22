#include <stdio.h>
#include <string.h>

int main(){
	int i=0,N,j=0,K,res=0;
	char S[21],ant[21];
	scanf("%d",&N);
	while(i<N)
	{
		scanf("%d",&K);
		j=0;
		res=0;
		while(j<K)
		{
			scanf(" %s",S);
			setbuf(stdin,NULL);
			if(strcmp(ant,S)!=0){
			 	res+=1;
			}
			if(strcmp(ant,S)==0){
				res=0;
			}
			if(j==0){
			strcpy(ant,S);
			}
			j+=1;
		}
		if(res==0){
			printf("%s\n",ant);
		}else{
			printf("ingles\n");
		}
		
		i+=1;
	}
	
	return 0;
}