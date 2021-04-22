#include <stdio.h>
int main()
{
    int n, i, j, cont=0;
    while(scanf("%d", &n) != EOF)
    {
        int num = 1;
        cont+=1;
        num += ((n*(n + 1)) / 2);
        if(n == 0){ 
            printf("Caso %d: %d numero\n", cont, num);
        }
        else printf("Caso %d: %d numeros\n", cont, num);
        printf("0");
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=i; j++)
                printf(" %d", i);
        }
        printf("\n\n");
    }
    return 0;
}