#include <stdio.h>
int main()
{
	int i,M,N;
	char um,dois,tres,quatro,cinco,seis,sete,oito,nove,dez,onze,doze,treze,quatorze,quinze;
	for(i=1;i<16;i++){
		scanf("%d %d",&M,&N);
		fflush(stdin);
		if(M>N && i==1){
			um='A';
		}
		if(M<N && i==1){
			um='B';
		}
		if(M>N && i==2){
			dois='C';
		}
		if(M<N && i==2){
			dois='D';
		}
		if(M>N && i==3){
			tres='E';
		}
		if(M<N && i==3){
			tres='F';
		}
		if(M>N && i==4){
			quatro='G';
		}
		if(M<N && i==4){
			quatro='H';
		}
		if(M>N && i==5){
			cinco='I';
		}
		if(M<N && i==5){
			cinco='J';
		}
		if(M>N && i==6){
			seis='K';
		}
		if(M<N && i==6){
			seis='L';
		}
		if(M>N && i==7){
			sete='M';
		}
		if(M<N && i==7){
			sete='N';
		}
		if(M>N && i==8){
			oito='O';
		}
		if(M<N && i==8){
			oito='P';
		}
		if(M>N && i==9){
			nove=um;
		}
		if(M<N && i==9){
			nove=dois;
		}
		if(M>N && i==10){
			dez=tres;
		}
		if(M<N && i==10){
			dez=quatro;
		}
		if(M>N && i==11){
			onze=cinco;
		}
		if(M<N && i==11){
			onze=seis;
		}
		if(M>N && i==12){
			doze=sete;
		}
		if(M<N && i==12){
			doze=oito;
		}
		if(M>N && i==13){
			treze=nove;
		}
		if(M<N && i==13){
			treze=dez;
		}
		if(M>N && i==14){
			quatorze=onze;
		}
		if(M<N && i==14){
			quatorze=doze;
		}
		if(M>N && i==15){
			quinze=treze;
			printf("%c\n",quinze);
		}
		if(M<N && i==15){
			quinze=quatorze;
			printf("%c\n",quinze);
		}
	}
	return 0;
}