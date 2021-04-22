#include <stdio.h>

#include <string.h>







int main()

{

    char str[1000],str1[1000];

    int i,j,k,l,n;

    scanf("%d",&n);

    getchar();

    while(n--)

    {

        gets(str);

        j = strlen(str);

        k=0;

        for(i=0;i<j;i++)

        {

            if(i == 0 && str[0]!=' ') {

               str1[k] = str[0];

               k++;

            }

           if(str[i]==' ' && str[i+1] == ' ')

            continue;


           if(str[i]==' ' && str[i+1] != ' ')

                {

                   str1[k] = str[i+1];

                   k++;

                }



        }

        str1[k] = '\0';

        printf("%s\n",str1);

    }



}