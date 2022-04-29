// Tính S(n) = 1 + 1/3 + 1/5 + ... + 1/(2n+1)

#include <stdio.h> // thư viện

int main () {
    int n; // biến n kiểu int
    double a = 0; // biến a kiểu double
    scanf ("%d", &n); // nhập vào n
    for (int i = 0; i <= n; i++) { // chạy từ 0 > n
        a += 1.0 / (2 * i + 1); // cộng dồn 1/(2i+1) vào a
    }
    printf ("%lf ", a); // in ra a
    return 0; // kết thúc
}
