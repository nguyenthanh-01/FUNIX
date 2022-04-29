// Tính S(n) = 1 + 1.2 + 1.2.3 + … + 1.2.3….N

#include <stdio.h> 

int main () {
  int n;
  long long a = 1, b = 0;
  scanf ("%d", &n);
  for (int i = 1; i <= n; i++) {
    a *= i;
    b += a;
  }
  printf ("%d", b);
  return 0; 
}
