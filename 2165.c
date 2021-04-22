#include <stdio.h>
int len(char T[]);
int main()
{
	char T[501];
	int q=0;
	
	scanf("%[^\n]s",T);
	q = len(T);
	if(q<=140){
		printf("TWEET\n");
	}else{
		printf("MUTE\n");
	}
	return 0;
}
int len(char T[]){
	int i=0;
	
	while(T[i]!='\0'){
		i+=1;
	}
	return i;
}