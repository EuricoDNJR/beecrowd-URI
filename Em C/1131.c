#include <stdio.h>

int main(int argc, char** argv)
{
	int i=0,o,inter,gremio,vinter=0,vgremio=0,empates=0;	
	while(1)
	{
		scanf("%d %d",&inter,&gremio);
		if(inter>gremio){
			vinter+=1;
		}
		else if(gremio>inter){
			vgremio+=1;
		}
		else if(inter==gremio){
			empates+=1;
		}
		i+=1;
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d",&o);
		if(o==2){
			printf("%d grenais\n",i);
			printf("Inter:%d\n",vinter);
			printf("Gremio:%d\n",vgremio);
			printf("Empates:%d\n",empates);
			if(vinter>vgremio){
				printf("Inter venceu mais\n");
			}
			if(vinter<vgremio){
				printf("Gremio venceu mais\n");
			}
			
			break;
		}
	}
	return 0;
}