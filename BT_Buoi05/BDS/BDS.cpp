#include <bits/stdc++.h>
#include "BDS.h"
using namespace std;

void BDS::Nhap()
{
    cout << "Nhap ma giao dich: ";
    cin >> MaGD;
    cout << "Nhap ngay, thang, nam giao dich: ";
    cin >> Ngay >> Thang >> Nam;
    cout << "Nhap don gia: ";
    cin >> DonGia;
    cout << "Nhap dien tich: ";
    cin >> DienTich;
}

void BDS::Xuat()
{
    cout << "Ma giao dich: " << MaGD << endl;
    cout << "Ngay, thang, nam giao dich: " << Ngay << "/" << Thang << "/" << Nam << endl;
    cout << "Don gia: " << DonGia << endl;
    cout << "Dien tich: " << DienTich << endl;
}

void GDDat::Nhap()
{
    BDS::Nhap();
    cout << "Nhap loai dat: ";
    cin >> LoaiDat;
}

float GDDat::TinhThanhTien()
{
    if (LoaiDat == 'A')
        ThanhTien = DienTich * DonGia * 1.5;
    else if (LoaiDat == 'B' || LoaiDat == 'C')
        ThanhTien = DienTich * DonGia;
    return ThanhTien;
}

void GDNhaPho::Nhap()
{
    BDS::Nhap();
    cout << "Nhap loai nha: ";
    cin >> LoaiNha;
    cout << "Nhap dia chi: ";
    cin.ignore();
    getline(cin, DiaChi);
}

float GDNhaPho::TinhThanhTien()
{
    if (LoaiNha == "cao cap")
        ThanhTien = DienTich * DonGia;
    else if (LoaiNha == "thuong")
        ThanhTien = DienTich * DonGia * 0.9;
    return ThanhTien;
}

GDNhaPho GDNhaPho::maxGD()
{
}

void GDChungCu::Nhap()
{
    BDS::Nhap();
    cout << "Nhap ma can: ";
    cin >> MaCan;
    cout << "Nhap tang: ";
    cin >> Tang;
}

float GDChungCu::TinhThanhTien()
{
    if (Tang == 1)
        ThanhTien = DienTich * DonGia * 2;
    else if (Tang >= 15)
        ThanhTien = DienTich * DonGia * 1.2;
    else
        ThanhTien = DienTich * DonGia;
    return ThanhTien;
}