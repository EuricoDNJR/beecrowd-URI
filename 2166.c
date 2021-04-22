#include <stdio.h>

int main(int argc, char** argv)
{
	double n, i, ans = 0;
	scanf("%lf",&n);
	for(i = 0; i < n; i++){
		ans += 2;
		ans = 1/ans;
	}
	ans += 1;
	
	printf("%.10lf\n",ans);
	return 0;
}
