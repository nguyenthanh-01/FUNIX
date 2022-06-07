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

int KiemTraMangDuong(int b[], int nb)
{
    for(int i = 0; i < nb; i++)
    {
        if(b[i] < 0)
        {
            return 0;
        }
    }
    return 1;
}

void XuatMangCon(int b[], int nb)
{
    for(int i = 0; i < nb; i++)
    {
        printf("%4d", b[i]);
    }
    printf("\n");
}


void LietKeDayConToanDuongVaDoDaiLonHon1(int a[], int n)
{
    int ChieuDaiCon;
    int b[MAX], nb;
    for(int i = 0; i < n; i++)
    {
        for(ChieuDaiCon = 2 + i; ChieuDaiCon <= n; ChieuDaiCon++)  // phải có hơn 2 phần tử
        {
            nb = 0;
            for(int j = i; j < ChieuDaiCon; j++)
            {
                b[nb] = a[j];
                nb++;
            }
            if(KiemTraMangDuong(b, nb) == 1)
            {
                XuatMangCon(b, nb);
            }
        }
    }
}
int main()
{
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);

    printf("\nLiet ke mang con toan duong va co do dai lon hon 1\n");
    LietKeDayConToanDuongVaDoDaiLonHon1(a, n);

    getch();
    return 0;
}
