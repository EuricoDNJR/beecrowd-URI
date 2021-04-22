#include <stdio.h>
#include <string.h>


int main()
{
	char str[55];
	int i;
	while(gets(str)!=NULL)
	{
		
		i=0;
		while(i<strlen(str))
		{
			if(str[i]>=97 && str[i]<=122){
				if(str[i]>=110){
					str[i]-=13;
				}else
				{
					str[i]+=13;
				}
			}
			else if(str[i]>=65 && str[i]<=90)
			{
				if(str[i]>=78){
					str[i]-=13;
				}else
				{
					str[i]+=13;
				}
			}
			i+=1;
		}
		printf("%s\n",str);
	}
	
	return 0;
}