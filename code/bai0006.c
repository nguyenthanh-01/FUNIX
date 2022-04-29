// Tính S(n) = 1/1×2 + 1/2×3 +…+ 1/n x (n + 1)

#include <stdio.h>

int main () {
  int n; // biến n kiểu int
  double a = 0; // biến a kiểu double
  scanf ("%d", &n); // nhập vào n
  for (int i = 1; i <= n; i++) { // chạy từ 1 > n
    a += 1.0 / (i * (i + 1)); // cộng dồn 1/n*(n+1) vào a
  }
  printf ("%lf ", a); // in ra a
  return 0; // kết thúc
}
