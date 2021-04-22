#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char** argv)
{
	int n,i=0;
	char shel[50], raj[50];
	scanf("%d",&n);
	while(1)
	{
		if(i == n){
			return 0;
		}
	 	scanf("%s %s",shel,raj);
	 	setbuf(stdin, NULL);
	 	if(strcmp(shel,"tesoura") == 0 && strcmp(raj,"papel") == 0){
			 printf("Caso #%d: Bazinga!\n",i+1);
		 }
		 else if(strcmp(shel,"papel") == 0 && strcmp(raj,"tesoura") == 0){
			 printf("Caso #%d: Raj trapaceou!\n",i+1);
		 }
		 else if(strcmp(shel,"tesoura") == 0 && strcmp(raj,"tesoura") == 0){
			 printf("Caso #%d: De novo!\n",i+1);
		 }
		 else if(strcmp(shel,"papel") == 0 && strcmp(raj,"pedra") == 0){
			 printf("Caso #%d: Bazinga!\n",i+1);
		 }
		 else if(strcmp(shel,"pedra") == 0 && strcmp(raj,"papel") == 0){
			 printf("Caso #%d: Raj trapaceou!\n",i+1);
		 }
		 else if(strcmp(shel,"papel") == 0 && strcmp(raj,"papel") == 0){
			 printf("Caso #%d: De novo!\n",i+1);
		 }
		 else if(strcmp(shel,"pedra") == 0 && strcmp(raj,"pedra") == 0){
			 printf("Caso #%d: De novo!\n",i+1);
		 }
		 else if(strcmp(shel,"lagarto") == 0 && strcmp(raj,"lagarto") == 0){
			 printf("Caso #%d: De novo!\n",i+1);
		 }
		 else if(strcmp(shel,"Spock") == 0 && strcmp(raj,"Spock") == 0){
			 printf("Caso #%d: De novo!\n",i+1);
		}
		 else if(strcmp(shel,"pedra") == 0 && strcmp(raj,"lagarto") == 0){
			 printf("Caso #%d: Bazinga!\n",i+1);
		 }
		 else if(strcmp(shel,"lagarto") == 0 && strcmp(raj,"pedra") == 0){
			 printf("Caso #%d: Raj trapaceou!\n",i+1);
		 }
		 else if(strcmp(shel,"lagarto") == 0 && strcmp(raj,"Spock") == 0){
			 printf("Caso #%d: Bazinga!\n",i+1);
		 }
		 else if(strcmp(shel,"Spock") == 0 && strcmp(raj,"lagarto") == 0){
			 printf("Caso #%d: Raj trapaceou!\n",i+1);
		 }
		 else if(strcmp(shel,"Spock") == 0 && strcmp(raj,"tesoura") == 0){
			 printf("Caso #%d: Bazinga!\n",i+1);
		 }
		 else if(strcmp(shel,"tesoura") == 0 && strcmp(raj,"Spock") == 0){
			 printf("Caso #%d: Raj trapaceou!\n",i+1);
		 }
		 else if(strcmp(shel,"tesoura") == 0 && strcmp(raj,"lagarto") == 0){
			 printf("Caso #%d: Bazinga!\n",i+1);
		 }
		 else if(strcmp(shel,"lagarto") == 0 && strcmp(raj,"tesoura") == 0){
			 printf("Caso #%d: Raj trapaceou!\n",i+1);
		 }
		 else if(strcmp(shel,"lagarto") == 0 && strcmp(raj,"papel") == 0){
			 printf("Caso #%d: Bazinga!\n",i+1);
		 }
		 else if(strcmp(shel,"papel") == 0 && strcmp(raj,"lagarto") == 0){
			 printf("Caso #%d: Raj trapaceou!\n",i+1);
		 }
		 else if(strcmp(shel,"papel") == 0 && strcmp(raj,"Spock") == 0){
			 printf("Caso #%d: Bazinga!\n",i+1);
		 }
		 else if(strcmp(shel,"Spock") == 0 && strcmp(raj,"papel") == 0){
			 printf("Caso #%d: Raj trapaceou!\n",i+1);
		 }
		 else if(strcmp(shel,"Spock") == 0 && strcmp(raj,"pedra") == 0){
			 printf("Caso #%d: Bazinga!\n",i+1);
		 }
		 else if(strcmp(shel,"pedra") == 0 && strcmp(raj,"Spock") == 0){
			 printf("Caso #%d: Raj trapaceou!\n",i+1);
		 }
		 else if(strcmp(shel,"pedra") == 0 && strcmp(raj,"tesoura") == 0){
			 printf("Caso #%d: Bazinga!\n",i+1);
		 }
		 else if(strcmp(shel,"tesoura") == 0 && strcmp(raj,"pedra") == 0){
			 printf("Caso #%d: Raj trapaceou!\n",i+1);
		 }
		i+=1;
	}
	return 0;
}