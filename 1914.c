#include <stdio.h>
int strcmpP(char *s, char *p);
int main()
{
	int i=0,qt,n,m,s=0;
	char jg1[100],jg2[100],es1[6],es2[6];
	scanf("%d",&qt);
	while(i<qt)
	{
		scanf("%s %s %s %s",jg1,es1,jg2,es2);
		scanf("%d %d",&n,&m);
		s=n+m;
		if(s%2==1){
			if(strcmpP(es1,"IMPAR")==0){
				printf("%s\n",jg1);
			}
			else if(strcmpP(es2,"IMPAR")==0){
				printf("%s\n",jg2);
			}
		}else
		{
			if(strcmpP(es1,"PAR")==0){
				printf("%s\n",jg1);
			}
			else if(strcmpP(es2,"PAR")==0){
				printf("%s\n",jg2);
			}	
		}
		fflush(stdin);
		i+=1;
	}
	return 0;
}
int strcmpP(char *s, char *p){
	int i=0,cont=0,dif=0;
	
	while(s[i]!='\0')
	{	
		if(s[i]==p[i]){
			cont+=1;   	
		}else{
			dif+=s[i]-p[i];
		}
		i+=1;
	}
	if(cont==i){
		return 0;
	}
	return dif;
}