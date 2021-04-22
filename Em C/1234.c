#include<stdio.h>
#include<string.h>
int main()
{
    char palavra[100];
    int i,j,l;
    while(gets(palavra) != NULL){
        j=0;
        l=strlen(palavra);
        for(i = 0;i < l;i++){
            if(palavra[i]!=' '){
               j++;
               if(palavra[i]>96 && j%2==1){
                palavra[i]-=32;
               }
               else if(palavra[i]<96 && j%2==0){
                palavra[i]+=32;
               }
            }
        }
        palavra[l]='\0';
        printf("%s\n",palavra);
    }
    return 0;
}