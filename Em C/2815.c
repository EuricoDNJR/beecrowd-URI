#include <stdio.h>
#include <string.h>

int main()
{
	char frase[15000];
	int i=0;
	
	
	gets(frase);
	for(i=0;i<strlen(frase);i++){
		if(frase[i]!=' '){
			if(frase[i]==frase[i+2] && frase[i+1]==frase[i+3]){
				printf("%c",frase[i+2]);
				i+=2;
			}else
			{
				printf("%c",frase[i]);
			}
		}else
		{
			printf("%c",frase[i]);
		}
		
		
	}
	printf("\n");
	
	
	
	return 0;
}