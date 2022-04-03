// Tính S(n) = 1/2 + 1/4 + 1/6 + ... + 1/2n

#include <stdio.h> // thư viện

int main () {
    int n; // biến n kiểu int
    double a = 0; // biến a kiểu double
    scanf ("%d", &n); // nhập vào n
    for (int i = 1; i <= n; i++) { // chạy từ 1 > n
        a += 1.0 / (2 * i); // cộng dồn 1/2i vào a
    }
    printf ("%lf ", a); // in ra a
    return 0; // kết thúc
}
