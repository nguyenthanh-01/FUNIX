// Tính S(n) = 1/2 + 3/4 + 5/6 + ... + (2n+1)/(2n+2)

#include <stdio.h>

int main () {
  int n; // biến n kiểu int
  double a = 0; // biến a kiểu double
  scanf ("%d", &n); // nhập vào n
  for (int i = 0; i <= n; i++) { // chạy từ 0 > n
    a += 1.0 * (2 * i + 1) / (2 * i + 2); // cộng dồn (2n+1)/(2n+2) vào a
  }
  printf ("%lf ", a); // in ra a
  return 0; // kết thúc
}
