#include<stdio.h>
#include<conio.h>

int main()
{
    int i, n, S;
    printf("\nNhap n: ");
    scanf("%d", &n);
    S = 0;
    i = 1;
    while(i <= n)
    {
        S = S + i * i * i;
        i++;
    }
    printf("\nTong la %d", S);
    getch();
    return 0;
}
