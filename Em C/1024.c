#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){
  
	int N,i,cont=0,j;
	char M[1000],aux;
   scanf("%d",&N);
   while(cont<N)
   {
   		scanf(" %[^\n]s",M);
	   for(i=0;i<strlen(M);i++){
		   if((M[i]>=65 && M[i]<=90)||(M[i]>=97 && M[i]<=122)){
			   M[i]+=3;
		   }
	   }
	   for(i=0,j=strlen(M)-1; i<strlen(M)/2; i++,j--){
		   aux = M[i];
		   M[i] = M[j];
		   M[j] = aux;
	   }
	   
	   for(i=strlen(M)/2;M[i]!='\0';i++){
		  
			M[i]-=1;
	   }
	   printf("%s\n",M); 
	   cont+=1;
   }
   
   
   
    
   return 0;
}