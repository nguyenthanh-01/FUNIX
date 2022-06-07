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


void LietKe(int a[], int n)
{
    int flag = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0 && (a[i - 1] % 2 == 0 || a[i + 1] % 2 == 0))
        {
            flag = 1;
            printf("%4d", a[i]);
        }
    }
    if (flag == 0)
        printf("Mang ko co gia tri do");
}
int main()
{
    int n;
    int a[MAX];
    
    nhap(a, n);
    xuat(a, n);

    printf("\nCac so trong mang thoa dieu kien\n ");
    LietKe(a, n);

    getch();
    return 0;
}
