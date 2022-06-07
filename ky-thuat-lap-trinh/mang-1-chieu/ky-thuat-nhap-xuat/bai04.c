#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100

void nhap (float a[], int &n)
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
        scanf("%f", &a[i]);
    }
}

void xuat(float a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%8.3f", a[i]);
    }
}

void lietkecacvitriam(float a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(a[i] < 0)
        {
            printf("%4d", i);
        }
    }
}
int main()
{
    int n;
    float a[MAX];

    nhap(a, n);
    xuat(a, n);
    printf("\nCac vi tri chua gia tri am la: ");
    lietkecacvitriam(a, n);

    getch();
    return 0;
}
