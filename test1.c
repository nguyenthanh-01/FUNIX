#include <stdio.h>
#include <math.h>

int main () {
	int a, b, c;
	float p1, p2, p3, p;
	scanf ("%d %d %d", &a, &b, &c);
	if ((a + b) <= c || (a + c) <= b || (b + c) <= a || a <= 0 || b <= 0 || c <= 0) {
		printf ("3 canh khong tao thanh tam giac");
		return 0;
	}
	p = a + b + c;
	printf ("Chu vi: %.0f \n", p);
	p /= 2;
	p1 = p - a;
	p2 = p - b;
	p3 = p - c;
	printf ("Dien tich: %.2f", sqrt (p * p1 * p2 * p3));
	return 0;
}
