#include <stdio.h>
int main() {

int x, y, i, z=0, c; scanf ("%d %d", &x, &y); if (x < y){ c = x; x = y; y = c; } if (x == y){ printf ("0\n"); }else{ for (i = y+1; i < x; i++) if (i%2 !=0) z = i + z; printf ("%d\n", z); }

return 0; }