// Tính S(n) = 1/1 + 1/(1 + 2) + 1/(1 + 2 + 3) + ….. + 1/(1 + 2 + 3 + …. + N)

#include <stdio.h>
#include <math.h>

int main () {
  int n;
  double b0 = 0, b1 = 0;
  scanf ("%d", &n);
  for (int i = 1; i <= n; i++) {
    b0 += i;
    b1 += 1 / b0;
  }
  printf ("%lf", b1);
  return 0;
}
