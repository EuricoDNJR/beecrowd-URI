#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
  char n[1110];
  int i, j, soma=0;
  int N;  

  scanf("%d", &N);
  for(i=0; i<N; i++){
    scanf("%s", n); 

      for(j=0; j<strlen(n); j++){
        if(n[j] == '1'){
          soma = soma + 2;
        }
          if(n[j] == '2'){
            soma = soma + 5;
          }
            else if(n[j] == '3'){
              soma = soma + 5;
            }
              else if(n[j] == '4'){
                soma += 4;
              }
                else if(n[j] == '5'){
                  soma += 5;
                }
                  else if(n[j] == '6'){
                    soma += 6;
                  }
                    else if(n[j] == '7'){
                      soma += 3;
                    }
                      else if(n[j] == '8'){
                        soma += 7;
                      }
                        else if(n[j] == '9'){
                          soma +=6;
                        }
                        	else if(n[j] == '0'){
                          	  soma +=6;
                        	}
                                       }

            printf("%d leds\n",soma);
         soma = 0;
     }
 return 0;
}