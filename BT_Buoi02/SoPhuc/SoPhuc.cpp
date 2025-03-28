#include <iostream>
#include "SoPhuc.h"
using namespace std;

void SoPhuc::Nhap()
{
    cin >> fSoThuc >> fSoAo;
}

void SoPhuc::Xuat()
{
    if (fSoAo > 0)
        cout << fSoThuc << " + " << fSoAo << "i\n";
    else
        cout << fSoThuc << " - " << abs(fSoAo) << "i\n";
}

SoPhuc SoPhuc::Cong(SoPhuc b)
{
    SoPhuc tong;
    tong.fSoThuc = fSoThuc + b.fSoThuc;
    tong.fSoAo = fSoAo + b.fSoAo;
    return tong;
}

SoPhuc SoPhuc::Tru(SoPhuc b)
{
    SoPhuc hieu;
    hieu.fSoThuc = fSoThuc - b.fSoThuc;
    hieu.fSoAo = fSoAo - b.fSoAo;
    return hieu;
}

SoPhuc SoPhuc::Nhan(SoPhuc b)
{
    SoPhuc tich;
    tich.fSoThuc = fSoThuc * b.fSoThuc - fSoAo * b.fSoAo;
    tich.fSoAo = fSoAo * b.fSoThuc + fSoThuc * b.fSoAo;
    return tich;
}

int main()
{
    SoPhuc sp1, sp2, tong, hieu, tich, thuong;
    sp1.Nhap();
    sp2.Nhap();

    tong = sp1.Cong(sp2);
    tong.Xuat();

    hieu = sp1.Tru(sp2);
    hieu.Xuat();

    tich = sp1.Nhan(sp2);
    tich.Xuat();

    thuong = sp1.Chia(sp2);
    thuong.Xuat();
}