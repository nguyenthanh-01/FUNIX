#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100
void NhapMaTran(int a[][MAX], int &n)
{
    do
    {
        printf("\nNhap n: ");
        scanf("%d", &n);
        if(n < 1 || n > MAX)
        {
            printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
        }
    }while(n < 1 || n > MAX);

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("\nNhap vao a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

void XuatMaTran(int a[][MAX], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%4d",a[i][j]);
        }
        printf("\n\n");
    }
}


void SapXepCheoChinhTangDan(int a[][MAX], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            int min = a[i][i];       //Kiểm tra min(a[i][i] với các phần tử sau nó
            if(a[j][j] < min)
            {
                min = a[j][j];
                a[j][j] = a[i][i];
                a[i][i] = min;  
            }
        }
    }
}

int main()
{
    int a[MAX][MAX], n;
    NhapMaTran(a,n);
    XuatMaTran(a,n);
    SapXepCheoChinhTangDan(a, n);
    printf("\nSap xep duong cheo chinh tang dan: \n");
    XuatMaTran(a, n);
    getch();
    return 0;
}
