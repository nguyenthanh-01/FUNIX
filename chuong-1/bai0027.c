#include<stdio.h>
#include<conio.h>

int main()
{
    int i, n;
    int count;
    do
    {
    printf("\nNhap n(n > 0): ");
    scanf("%d", &n);
      if(n <= 0)
       {
        printf("\n N phai > 0. Xin nhap lai !");
       }
    }while(n <= 0);
    i = 1;
    count = 0;
    printf("\nCac uoc so chan cua so %d la: ",n);
    while(i <= n)
    {
        if(n % i == 0)
        {
            if(i % 2 == 0)
            {
            printf("%4d", i);
            count++;
            }
        }
            i++;
    }
    printf("\nSo luong uoc so chan cua %d la: %ld", n, count);

    getch();
    return 0;
}
