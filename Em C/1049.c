#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char v_i[20];
    char av_ma[20];
    char ca_on[20];
    char on_her[20];
    
    scanf("%s",v_i);
    fflush(stdin);
    if(!strcmp(v_i,"vertebrado")){
		scanf("%s",av_ma);
		fflush(stdin);
		if(!strcmp(av_ma,"ave")){
		scanf("%s",ca_on);
		fflush(stdin);
 	   	   if(!strcmp(ca_on,"carnivoro")){
					printf("aguia\n");
			}else{
					printf("pomba\n");
			}				 			  		
		}else{
			fflush(stdin);
			scanf("%s",on_her);
			if(!strcmp(on_her,"onivoro")){
				printf("homem\n");
			}else{
				printf("vaca\n");
			}
		}
		
	}
	else{
		scanf("%s",av_ma);
		fflush(stdin);
		if(!strcmp(av_ma,"inseto")){
		scanf("%s",ca_on);
		fflush(stdin);
 	   	   if(!strcmp(ca_on,"hematofago")){
					printf("pulga\n");
			   }else if(!strcmp(ca_on,"herbivoro")){
					printf("lagarta\n");
			}
							 			  		
		}else if(!strcmp(av_ma,"anelideo")){
			scanf("%s",on_her);
			fflush(stdin);
			if(!strcmp(on_her,"hematofago")){
				printf("sanguessuga\n");
			}else if(!strcmp(on_her,"onivoro")){
				printf("minhoca\n");
			}
			
		}
	}  		
    return 0;
}