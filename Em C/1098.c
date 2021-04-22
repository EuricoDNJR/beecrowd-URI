#include <stdio.h>
int main()
{
    double a,b,c=1,d=3,e,f;
    int i;
    for(a=0; a<=1.9; a=a+.2)
    {
        for(b=1.0; b<=3.0; b++)
        {
            e=b+a;
            if(a==0.0||a==1.0){ 
				printf("I=%.0lf J=%.0lf",a,e);
			}
            else if(e==3.0||e==4.0||e==5.0){ 
				printf("I=%.0lf J=%.0lf",a,e);
			}
            else{ 
				printf("I=%.1lf J=%.1lf",a,e);
			}
            printf("\n");
        }
    }
    for(i=3; i<=5; i++){ 
		printf("I=2 J=%d\n",i);
	}
    return 0;
}