#include <bits/stdc++.h>
#include "TV.h"
using namespace std;

void Sach::Nhap()
{
    cout << "Nhap loai sach (1. SGK, 2. STK): ";
    cin >> LoaiSach;
    cout << "Nhap ma sach: ";
    cin.ignore();
    getline(MaSach, cin);
    cout << "Nhap ten sach: ";
    getline(TenSach, cin);
    cout << "Nhap NXB: ";
    getline(NXB, cin);
    cout << "Nhap so luong: ";
    cin >> SoLuong;
    cout << "Nhap don gia: ";
    cin >> DonGia;
}

void Sach::Xuat()
{
    cout << "Ma sach: " << MaSach << endl;
    cout << "Ten sach: " << TenSach << endl;
    cout << "NXB: " << NXB << endl;
    cout << "So luong: " << SoLuong << endl;
    cout << "Don gia: " << DonGia << endl;
}