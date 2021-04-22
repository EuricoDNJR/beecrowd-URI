#include <stdio.h>



int main() {
 	long v[10]={1,1,2,6,24,120,720,5040,40320,200000},i,flag=0,n,cont=0;
 
 		
	 scanf("%ld",&n);
	 while(flag<n)
	 {
		 i=0;
		 while(v[i+1]+flag<=n)
		 {	
			 i+=1;
		 }
		 flag+=v[i];
		 cont+=1;
	 } 
	 printf("%ld\n",cont);
	 
	 
	return 0;
}
