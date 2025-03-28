#include <iostream>
#include "CongVien.h"
using namespace std;

void Ve::Nhap()
{
    cin >> iSoTroChoi;
}

void CongVien::NhapDSVe()
{
    cout << "Nhap so luong ve: ";
    cin >> SoLuong;
    ds = new Ve[SoLuong];
    for (int i = 0; i < SoLuong; i++)
    {
        cout << "Nhap sl tro choi cua ve " << i + 1 << ": ";
        ds[i].Nhap();
    }
}

long long Ve::TinhTien()
{
    return 70000 + iSoTroChoi * 20000;
}

long long CongVien::DoanhThu()
{
    long long DoanhThu = 0;
    for (int i = 0; i < SoLuong; i++)
    {
        DoanhThu += ds[i].TinhTien();
    }
    return DoanhThu;
}

void CongVien::XuatDoanhThu()
{
    long long TongTien = DoanhThu();
    cout << "Tong so tien ma cong vien thu duoc: " << TongTien;
}