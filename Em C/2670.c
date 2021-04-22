#include <stdio.h>

int main()
{
	int A1,A2,A3,v1,v2,v3;
	scanf("%d",&A1);
	scanf("%d",&A2);
	scanf("%d",&A3);
	v1=(A2*2)+(A3*4);
	v2=(A1*2)+(A3*2);
	v3=(A2*2)+(A1*4);
	if(v1<=v2 && v1<=v3){
		printf("%d\n",v1);
	}
	else if(v2<=v1 && v2<=v3){
		printf("%d\n",v2);
	}
	else if(v3<=v2 && v3<=v1){
		printf("%d\n",v3);
	}
	
	
	
	return 0;
}