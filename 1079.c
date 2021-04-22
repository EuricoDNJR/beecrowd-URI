#include <stdio.h>

int main()
{
	float n1,n2,n3;
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%f %f %f",&n1,&n2,&n3);
		printf("%.1f\n",(n1*2.0+n2*3.0+n3*5.0)/10.0);
	}
	return 0;
}