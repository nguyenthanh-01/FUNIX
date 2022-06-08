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

int KiemTraNguyenTo(int n)
{
    if(n < 2)
    {
        return 0;
    }
    else if(n > 2)
    {
        if(n % 2 == 0)
        {
            return 0;
        }
        for(int i = 3; i <= sqrt((float)n); i+= 2)
        {
            if(n % i == 0)
            {
                return 0;
            }
        }
    }
    return 1;
}
void HoanVi(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void SapXepNguyenToTangDan(int a[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        if(KiemTraNguyenTo(a[i]) == 1)
        {
            for(int j = i + 1; j < n; j++)
            {
                if(KiemTraNguyenTo(a[j]) == 1 && a[i] > a[j])
                {
                    HoanVi(a[i], a[j]);
                }
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

    SapXepNguyenToTangDan(a, n);
    printf("\nMang sau khi sap xep nguyen to tang dan: ");
    xuat(a, n);

    getch();
    return 0;
}
