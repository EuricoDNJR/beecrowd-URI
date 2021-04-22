#include<stdio.h>

int main()
{
    long long int n;
    int m,j,k;
    while(scanf("%lld",&n)!=EOF){
        while(n){
            m = n % 10;
            n = n / 10;
            printf("%d",m);
        }
        printf("\n");
    }
    return 0;
}