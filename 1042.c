#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
    if (a<b && a<c){
		printf("%d\n",a);
		if(b<c){
			printf("%d\n",b);
			printf("%d\n",c);   	
		}
		if(c<b){
			printf("%d\n",c);
			printf("%d\n",b);
		}	
	}
	if (b<a && b<c){
		printf("%d\n",b);
		if(a<c){
			printf("%d\n",a);
			printf("%d\n",c);   	
		}
		if(c<a){
			printf("%d\n",c);
			printf("%d\n",a);
		}	
	}
	if (c<a && c<b){
		printf("%d\n",c);
		if(a<b){
			printf("%d\n",a);
			printf("%d\n",b);   	
		}
		if(b<a){
			printf("%d\n",b);
			printf("%d\n",a);
		}	
	}
	printf("\n");
	printf("%d\n",a);
	printf("%d\n",b);
	printf("%d\n",c);
	
    return 0;
}