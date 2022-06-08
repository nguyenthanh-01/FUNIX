#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100

void nhap (int a[], int &n)
{
    do
    {
        printf("\nNhap so phan tu: ");
        scanf("%d", &n);
        if(n <= 0 || n > MAX)
        {
            printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
        }
    }while(n <= 0 || n > MAX);
    for(int i = 0; i < n; i++)
    {
        printf("\nNhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

void xuat(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%4d", a[i]);
    }
}

double TinhKgCachTBGiuaCacGiaTriTrongMang(int a[], int n)
{
    int Tong = 0;
    int y = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            Tong += abs(a[i] - a[i + 1]);
            y++;
        }
    }
    return pow(Tong, 1.0/y);
}
int main()
{
    int n;
    int a[MAX];
    int x;

    nhap(a, n);
    xuat(a, n);

    float KgCach = TinhKgCachTBGiuaCacGiaTriTrongMang(a, n);
    printf("\nKhoang cach TB giua cac gia tri trong mang = %.3f", KgCach);

    getch();
    return 0;
}
