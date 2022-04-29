// Tính S(n) = 1 x 2 x 3 x … x N

#include <stdio.h>

int main () {
  int n; // biến n kiểu int
  long long a = 1; // biến a kiểu long long
  scanf ("%d", &n); // nhập vào n
  for (int i = 1; i <= n; i++) { // chạy từ 1 > n
    a *= i ; // nhân dồn i vào a
  }
  printf ("%lld ", a); // in ra a
  return 0; // kết thúc
}
