// Tính S(x, n) = x^n

#include <stdio.h> // thư viện io
#include <math.h> // thư viện math

int main () {
  int x, n; // khai báo x, n kiểu int
  scanf ("%d %d", &x, &n); // nhập vào x, n
  printf ("%d ", (int) pow (x, n)); // pow trả về x^n kiểu double, (int) ép kiểu sang kiểu int
  return 0; // kết thúc
}
