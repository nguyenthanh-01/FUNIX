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

int TinhTongCacPhanTuLonHonPhanTuXungQuanh(int a[], int n)
{
    int Tong = 0;
    for(int i = 0; i < n; i++)
    {
        if(i == 0 && a[i] > a[i + 1])  // phần tử đầu
        {
            Tong += a[i];
        }
        else if(i != 0 && a[i] > a[i + 1] && a[i] > a[i - 1])    // phần tử đứng giữa
        {
            Tong += a[i];
        }
        else if(i == n - 1 && a[i] > a[i - 1])              // phần tử cuối
        {
            Tong += a[i];
        }
    }
    return Tong;
}
int main()
{
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);
    int tong = TinhTongCacPhanTuLonHonPhanTuXungQuanh(a, n);
    printf("\nTong bang %d", tong);

    getch();
    return 0;
}
