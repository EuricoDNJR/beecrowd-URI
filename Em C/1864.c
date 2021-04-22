#include <stdio.h>
void strupfalsa(char *s);
int main()
{
	char *frase[] = {"l","i","f","e"," ","i","s"," ","n","o","t"," ","a"," ","p","r","o","b","l","e","m"," ","t","o"," ","b","e"," ","s","o","l","v","e","d"};
	int i=0,n;
	scanf("%d",&n);
	char aux[n];
	while(i<n)
	{
		aux[i]=*frase[i];
		i+=1;
	}
	aux[i]='\0';
	strupfalsa(aux);
	printf("%s\n",aux);
	
	return 0;
}
void strupfalsa(char *s){
	int i=0;
	while(s[i]!='\0')
	{
		if(s[i]==' '){
			i+=1;
		}else{
		s[i]-=32;
		i+=1;
		}
		
	}
	s[i]='\0';
}