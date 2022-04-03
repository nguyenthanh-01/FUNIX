// Tính S(n) = 1/1 + 1/2 + 1/3 + ... + 1/n

#include <stdio.h> // thư viện

int main () {
    int n; // biến n kiểu int
    double a = 0; // biến a kiểu double
    scanf ("%d", &n); // nhập vào n
    for (int i = 1; i <= n; i++) { // chạy từ 1 > n
        a += 1.0 / i; // cộng dồn 1/i vào a, 1.0 là ép kiểu sang số thực
    }
    printf ("%lf ", a); // in ra a
    return 0;
}
