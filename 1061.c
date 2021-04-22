#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	char a[4], b[2],c[2],d[2],e[2],f[4];
    int i,j,k,l,m,n,p,q,r,s,t,u,v,res[3];
    scanf("%s%d", a,&i);
    scanf("%d%s%d%s%d", &j,b,&k,c,&l);
    scanf("%s%d", f,&p);
    scanf("%d%s%d%s%d", &q, d,&r,e,&s);
    m=60-l+s;
    n=(60-1-k+r)*60;
    t=(24-1-j+q)*3600;
    u=(p-i-1)*86400;
    v=m+n+t+u;
    res[0]=v/86400;
    printf("%d dia(s)\n", res[0]);

    res[0]=v%86400;
    res[1]=res[0]/3600;
    printf("%d hora(s)\n", res[1]);

    res[1]=res[0]%3600;
    res[2]=res[1]/60;
    printf("%d minuto(s)\n", res[2]);

    res[2]=res[1]%60;
    printf("%d segundo(s)\n", res[2]);
	return 0;
}