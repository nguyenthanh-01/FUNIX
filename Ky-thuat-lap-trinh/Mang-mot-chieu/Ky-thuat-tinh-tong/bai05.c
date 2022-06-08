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

/*
1 4 5 3 2
do 4 > 1
   5 > 4
   tổng là 9
*/
int TongCacPhanTuLonHonPhanTuDungLienTruocNo(int a[], int n)
{
    int Tong = 0;
    for(int i = 1; i < n; i++)
    {
        if(a[i] > a[i - 1])
        {
            Tong += a[i];
        }
    }
    return Tong;
}

void xuat(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%4d", a[i]);
    }
}
int main()
{
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);
    int tong = TongCacPhanTuLonHonPhanTuDungLienTruocNo(a, n);
    printf("\nTong la %d", tong);

    getch();
    return 0;
}
