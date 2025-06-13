#include <bits/stdc++.h>
#include "NhanSu.h"
using namespace std;

void NhanSu::Nhap()
{
    cout << "Nhap ho ten: ";
    cin.ignore();
    getline(cin, HoTen);
    cout << "Nhap ma nhan vien: ";
    cin >> MaNV;
    cout << "Nhap nam sinh: ";
    cin >> NamSinh;
    cout << "Nhap luong co ban: ";
    cin >> LuongCoBan;
}

void NhanSu::Xuat()
{
    cout << "Ho ten: " << HoTen << endl;
    cout << "Ma nhan vien: " << MaNV << endl;
    cout << "Nam sinh: " << NamSinh << endl;
    cout << "Luong co ban: " << LuongCoBan << endl;
    cout << "Luong: " << Luong << endl;
}

long NhanSu::TinhLuong()
{
    return Luong;
}

int NhanSu::LoaiNhanSu()
{
    return 0;
}

int NhanSu::getSoChienDich() const
{
    return 0;
}

int NhanSu::getSoPhutVideo() const
{
    return 0;
}

void BTV::Nhap()
{
    NhanSu::Nhap();
    cout << "Nhap so bai viet hoan chinh: ";
    cin >> SoBaiViet;
    cout << "Nhap tong luot xem cac bai viet: ";
    cin >> TongLuotXem;
}

void BTV::Xuat()
{
    NhanSu::Xuat();
    cout << "So bai viet hoan chinh: " << SoBaiViet << endl;
    cout << "Tong luot xem cac bai viet: " << TongLuotXem << endl;
}

long BTV::TinhLuong()
{
    Luong = LuongCoBan + SoBaiViet * 200000 + (int)TongLuotXem / 10000 * 500000;
    return Luong;
}

int BTV::LoaiNhanSu()
{
    return 1;
}

void NguoiDungVideo::Nhap()
{
    NhanSu::Nhap();
    cout << "Nhap so phut video hoan chinh: ";
    cin >> SoPhutVideo;
}

void NguoiDungVideo::Xuat()
{
    NhanSu::Xuat();
    cout << "So phut video hoan chinh: " << SoPhutVideo << endl;
}

long NguoiDungVideo::TinhLuong()
{
    Luong = LuongCoBan + SoPhutVideo * 50000;
    return Luong;
}

int NguoiDungVideo::LoaiNhanSu()
{
    return 2;
}

int NguoiDungVideo::getSoPhutVideo() const
{
    return SoPhutVideo;
}

void ChuyenVienTruyenThong::Nhap()
{
    NhanSu::Nhap();
    cout << "Nhap so chien dich truyen thong: ";
    cin >> SoChienDich;
}

void ChuyenVienTruyenThong::Xuat()
{
    NhanSu::Xuat();
    cout << "So chien dich truyen thong: " << SoChienDich << endl;
}

long ChuyenVienTruyenThong::TinhLuong()
{
    Luong = LuongCoBan + SoChienDich * 500000;
    return Luong;
}

int ChuyenVienTruyenThong::LoaiNhanSu()
{
    return 3;
}

int ChuyenVienTruyenThong::getSoChienDich() const
{
    return SoChienDich;
}