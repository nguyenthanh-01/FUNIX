#include<stdio.h>
#include<conio.h>

int main()
{
    char kytu;
    for(kytu = 'A'; kytu <= 'Z'; kytu++)
    {
        printf("%4c", kytu);
    }
    getch();
    return 0;
}
