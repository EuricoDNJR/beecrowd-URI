#include <stdio.h>
int abs(int n);
int main(int argc, char** argv)
{
	int l,c,i,j;
	while(scanf("%d %d",&l,&c) != EOF)
	{
		int m[l][c];
		int flag = 0;
		int x1, x2, y1, y2;
		for(i = 0; i < l; i++){
			for(j = 0; j < c; j++){
				scanf("%d",&m[i][j]);
				if(m[i][j] == 1 || m[i][j] == 2){
					flag += 1;
					if(flag == 1){
						x1 = i;
						y1 = j;
						flag += 1;
					}
					if(flag == 3){
						x2 = i;
						y2 = j;
						flag += 1;
					}
				}
			}
		}
		int r = abs(x2 - x1) + abs(y2 - y1);
		printf("%d\n",r);
	}
	return 0;
}
int abs(int n){
	if(n < 0){
		n = n * (-1);
	}
	return n;
}