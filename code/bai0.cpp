#include <iostream>

using namespace std;

typedef struct phanso {
    int tuso, mauso;
}phanso;

void nhap (phanso &ps);
void xuat (phanso ps);
phanso tong (phanso ps1, phanso ps2);
int ucln (int a, int b);
void rut_gon (phanso &ps3);
phanso operator+ (phanso ps1, phanso ps2);
phanso operator- (phanso ps1, phanso ps2);
phanso operator* (phanso ps1, phanso ps2);
phanso operator/ (phanso ps1, phanso ps2);
phanso operator+ (phanso ps1, int b);
phanso operator+ (int a, phanso ps2);
istream& operator >> (istream &vao, phanso &ps);
ostream& operator << (ostream &ra, phanso ps);

int main () {
    phanso ps1, ps2, ps3, ps4, ps5, ps6;
    cin >> ps1 >> ps2;
    cout << ps1 << "\n" << ps2;

    ps3 = 5 + ps1;
    cout << "\ntong: ";
    cout << ps3;

    ps4 = ps1 - ps2;
    cout << "\nhieu: ";
    cout << ps4;

    ps5 = ps1 * ps2;
    cout << "\ntich: ";
    cout << ps5;

    ps6 = ps1 / ps2;
    cout << "\nthuong: ";
    cout << ps6;

    return 0;
}

void nhap (phanso &ps) {
    
}

void xuat (phanso ps) {
    
}

phanso tong (phanso ps1, phanso ps2) {
    
}

int ucln (int a, int b) {
    if (a == 0) {
        return b;
    }
    if (a < 0) {
        a *= -1;
    }
    if (b < 0) {
        b *= -1;
    }
    for (;;) {
        if (a > b) {
            a -= b;
        }
        else b -= a;
        if (a != b) {
            continue;
        }
        return a;
    }
}

void rut_gon (phanso &ps3) {
    int a = ucln (ps3.tuso, ps3.mauso);
    ps3.tuso /= a;
    ps3.mauso /= a;
}

phanso operator+ (phanso ps1, phanso ps2) {
    phanso ps3;
    ps3.tuso = (ps1.tuso * ps2.mauso) + (ps1.mauso * ps2.tuso);
    ps3.mauso = ps1.mauso * ps2.mauso;
    rut_gon (ps3);
    return ps3;
}

phanso operator+ (phanso ps1, int b) {
    phanso ps2;
    ps2.tuso = b;
    ps2.mauso = 1;
    return ps1 + ps2;
}

phanso operator+ (int a, phanso ps2) {
    return ps2 + a;
}

phanso operator- (phanso ps1, phanso ps2) {
    phanso ps3;
    ps3.tuso = (ps1.tuso * ps2.mauso) - (ps1.mauso * ps2.tuso);
    ps3.mauso = ps1.mauso * ps2.mauso;
    rut_gon (ps3);
    return ps3;
}

phanso operator* (phanso ps1, phanso ps2) {
    phanso ps3;
    ps3.tuso = ps1.tuso * ps2.tuso;
    ps3.mauso = ps1.mauso * ps2.mauso;
    rut_gon (ps3);
    return ps3;
}

phanso operator/ (phanso ps1, phanso ps2) {
    phanso ps3;
    ps3.tuso = ps1.tuso * ps2.mauso;
    ps3.mauso = ps1.mauso * ps2.tuso;
    rut_gon (ps3);
    return ps3;
}

istream& operator >> (istream &vao, phanso &ps) {
    cout << "\nnhap vao tu so: ";
    vao >> ps.tuso;
    for (;;) {
        cout << "\nnhap vao mau so: ";
        vao >> ps.mauso;
        if (ps.mauso == 0) {
            continue;
        }
        break;
    }
    return vao;
}

ostream& operator << (ostream &ra, phanso ps) {
    if (ps.mauso > 1) {
        ra << ps.tuso << "/" << ps.mauso;
    }
    else ra << ps.tuso;
    return ra;
}
