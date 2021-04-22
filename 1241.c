#include <stdio.h>

#include <string.h>

int main()

{

    char str1[10000],str2[10000];

    int i,j,k,l,n,m,cont,T,lmt=0;

    scanf("%d",&T);

    while(lmt<T)

    {

        scanf("%s",str1);

        scanf("%s",str2);

        i = strlen(str1);

        j= strlen(str2);

        if(j>i)

           printf("nao encaixa\n");

        else if(i>=j)

         {

             k = i-j;

             m=0;

             cont =0;

             for(n=k;n<i;n++)

             {

                 if(str1[n]==str2[m])

                    cont++;

                    m++;

             }

             if(cont== j)

                printf("encaixa\n");

             else

                printf("nao encaixa\n");

         }
         lmt+=1;

    }

}