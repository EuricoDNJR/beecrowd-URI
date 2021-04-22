#include <stdio.h>

int main()
{
	int cont=0,i,j,mes,dia,lmt;
	while(scanf("%d %d",&mes,&dia)!=EOF)
	{	
		if(mes==12 && dia==24)	{
			printf("E vespera de natal!\n");
		}
		else if(mes==12 && dia==25){
			printf("E natal!\n");
		}
		else if(mes==12 && dia>25){
			printf("Ja passou!\n");
		}
		else
		{
			for(i=mes;i<=12;i++){
				if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12){
					lmt = 31;
				}
				else if(i==2){
					lmt = 29;
				}
				else
				{
					lmt = 30;
				}
				for(j=dia;j<=lmt;j++){
					if(j==25 && i==12){
						break;
					}else
					{
						cont+=1;
					}
				}
				dia=1;
			}
			printf("Faltam %d dias para o natal!\n",cont);
		}
		cont=0;
	}
	return 0;
}