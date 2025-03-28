#include <iostream>
using namespace std;

struct PhanSo
{
    int iTu;
    int iMau;
};

void NhapPhanSo(PhanSo &ps)
{
    cin >> ps.iTu >> ps.iMau;
}

int TimUCLN(int Tu, int Mau)
{
    while (Tu * Mau != 0)
    {
        if (Tu > Mau)
            Tu %= Mau;
        else
            Mau %= Tu;
    }
    return Tu + Mau;
}

void XuatPhanSo(PhanSo ps, int UCLN)
{
    if (ps.iMau == 0)
        cout << "Phan so khong hop le.";
    else if ((ps.iMau / UCLN) == 1)
        cout << ps.iTu / UCLN;
    else
        cout << ps.iTu / UCLN << "/" << ps.iMau / UCLN;
}

int main()
{
    PhanSo ps1;
    NhapPhanSo(ps1);
    int UCLN = TimUCLN(ps1.iTu, ps1.iMau);
    XuatPhanSo(ps1, UCLN);
}