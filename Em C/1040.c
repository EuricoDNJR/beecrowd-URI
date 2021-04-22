#include <stdio.h>
#include <stdlib.h>

int main()
{
    float N1, N2, N3, N4, media, ne;
    scanf("%f %f %f %f",&N1,&N2,&N3,&N4);
    media=(N1*2+N2*3+N3*4+N4*1)/10;
    scanf("%f",&ne);
    printf("Media: %.1f\n",media);
    if(media>=7.0){
		printf("Aluno aprovado.\n");
	}else{
		if(media<5.0){
			printf("Aluno reprovado.\n");
		}
		if(media>=5.0 && media<=6.9){
			printf("Aluno em exame.\n");
			printf("Nota do exame: %.1f\n",ne);
			media=(media+ne)/2;
			if(media>=5.0){
				printf("Aluno aprovado.\n");
				printf("Media final: %.1f\n",media);
			}
			if(media<5.0){
				printf("Aluno reprovado.\n");
				printf("Media final: %.1f\n",media);	
			}
		}
	}
    return 0;
}