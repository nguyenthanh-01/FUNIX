// Tính S(n) = x + x^2 + x^3 + … + x^n

#include <stdio.h> 
#include <math.h>

int main () {
  int n;
  int x, b = 0;
  scanf ("%d %d", &x, &n);
  for (int i = 1; i <= n; i++) {
    b += (int) pow (x, i);
  }
  printf ("%d", b);
  return 0;
}
