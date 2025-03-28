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

PhanSo SoSanhPhanSo(PhanSo ps1, PhanSo ps2)
{
    if (ps1.iTu * ps2.iMau >= ps2.iTu * ps1.iMau)
        return ps1;
    else
        return ps2;
}

void XuatPhanSo(PhanSo ps)
{
    cout << ps.iTu << "/" << ps.iMau;
}

int main()
{
    PhanSo ps1, ps2;
    NhapPhanSo(ps1);
    NhapPhanSo(ps2);
    PhanSo KetQua = SoSanhPhanSo(ps1, ps2);
    XuatPhanSo(KetQua);
}