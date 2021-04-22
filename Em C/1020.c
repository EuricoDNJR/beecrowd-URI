#include <stdio.h>
 
int main() {
 
    int dias,anos;
    scanf("%d",&dias);
    anos=dias/365;
    printf("%d ano(s)\n",dias/365);
    printf("%d mes(es)\n",(dias-anos*365)/30);
    printf("%d dia(s)\n",(dias-anos*365)%30);
 
    return 0;
}