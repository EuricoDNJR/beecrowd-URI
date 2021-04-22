#include <stdio.h>
int valorgolpe(int a, int d, int l, int b);
int main(int argc, char** argv)
{
	int a,d,l,b,t,dabriel, guarte;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&b);
		scanf("%d %d %d",&a,&d,&l);
		dabriel = valorgolpe(a,d,l,b);
		scanf("%d %d %d",&a,&d,&l);
		guarte = valorgolpe(a,d,l,b);
		if(dabriel > guarte){
			printf("Dabriel\n");
		}
		else if(guarte > dabriel)
		{
			printf("Guarte\n");
		}
		else
		{
			printf("Empate\n");
		}
		
	}
	return 0;
}
int valorgolpe(int a, int d, int l, int b){
	int calc = (a + d)/2;
	if(l % 2 == 0){
		return calc + b;
	}
	return calc;
}