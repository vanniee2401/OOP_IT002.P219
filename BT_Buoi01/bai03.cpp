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

PhanSo CongPS(PhanSo ps1, PhanSo ps2)
{
}

PhanSo TruPS(PhanSo ps1, PhanSo ps2)
{
}

PhanSo NhanPS(PhanSo ps1, PhanSo ps2)
{
}

PhanSo ChiaPS(PhanSo ps1, PhanSo ps2)
{
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
    PhanSo Tong = CongPS(ps1, ps2);
    PhanSo Hieu = TruPS(ps1, ps2);
    PhanSo Tich = NhanPS(ps1, ps2);
    PhanSo Thuong = ChiaPS(ps1, ps2);
    XuatPhanSo(Tong);
    XuatPhanSo(Hieu);
    XuatPhanSo(Tich);
    XuatPhanSo(Thuong);
}