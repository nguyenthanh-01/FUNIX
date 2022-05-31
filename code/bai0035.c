#include<stdio.h>
#include<conio.h>
#include<Windows.h>
#include<math.h>

void Nhapn(int &n)
{
	quaylai:printf("\nNhap vao n=");
	scanf("%d",&n);
	if(n<=0)
	{
		printf("\nSo ban nhap vao khong hop le!Xin vui long nhap lai!\n");
		goto quaylai;
	}
}

void XuLyDuLieu(int n)
{
	float s=sqrt(1.0*n);
	for(int i=n-1;i>=1;i--)
	{
		s=sqrt(i+s);
	}
	printf("\nKet qua la:%f",s);
}

void main()
{
	int n,tieptuc;
	quaylai:Nhapn(n);
	XuLyDuLieu(n);
	printf("\nBan co muon tiep tuc thuc hien chuong trinh hay khong ? Neu co bam phim C,nguoc lai bam bat ky 1 phim nao khac de ket thuc!");
	tieptuc=getch();
	if(tieptuc=='c'||tieptuc=='C')
	{
		system("cls");
		goto quaylai;
	}
}
