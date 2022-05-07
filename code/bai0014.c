// Tính S(n) = x + x^3 + x^5 + … + x^2n + 1

#include <stdio.h> 
#include <math.h>

int main () {
  int n;
  int x, b = 0;
  scanf ("%d %d", &x, &n);
  for (int i = 0; i <= n; i++) {
    b += (int) pow (x, 2 * i + 1);
  }
  printf ("%d", b);
  return 0;
}
