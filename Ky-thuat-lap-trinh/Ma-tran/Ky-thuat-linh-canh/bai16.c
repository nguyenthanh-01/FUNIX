#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100
void NhapMang(int a[][MAX], int &dong, int &cot)
{
    //Nhập số dòng
    do
    {
        printf("\nNhap vao so dong: ");
        // Cách tà đạo: scanf("dong =%d",&dong);  // Lúc nhập phải viết thêm  chữ ( dong =  ) ở khung console
        scanf("%d",&dong);

        if(dong < 1 || dong > MAX)
        {
            printf("\nSo dong khong hop le. Xin kiem tra lai!");
        }

    }while(dong < 1 || dong > MAX);

    //Nhập số cột
    do
    {
        printf("\nNhap vao so cot: ");
        scanf("%d",&cot);

        if(cot < 1 || cot > MAX)
        {
            printf("\nSo cot khong hop le. Xin kiem tra lai!");

        }

    }while(cot < 1 || cot > MAX);
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            printf("\nNhap a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

void XuatMang(int a[][MAX], int dong, int cot)
{
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            printf("%4d", a[i][j]);
        }
        printf("\n\n");
    }
}

int DemSoLanXuatHienCuaX(int a[][MAX], int dong, int cot, int x)
{
    int temp = 0;
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            if(a[i][j] == x)
            {
                temp++;
            }
        }
    }
    return temp;
}
int TimGiaTriXuatHienNhieuNhat(int a[][MAX], int dong, int cot)
{
    int temp1, temp = DemSoLanXuatHienCuaX(a, dong, cot, a[0][0]), index1 = 0, index2 = 0;
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            temp1 = DemSoLanXuatHienCuaX(a, dong, cot, a[i][j]);
            if(temp < temp1)
            {
                temp = temp1;
                index1 = i;
                index2 = j;
            }
        }
    }
    return a[index1][index2];
}
int main()
{
    int a[MAX][MAX], dong, cot;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);

    int giatri = TimGiaTriXuatHienNhieuNhat(a, dong, cot);
    printf("\nGia tri xuat hien nhieu nhat la %d", giatri);



    getch();
    return 0;
}
