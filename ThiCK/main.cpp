#include <bits/stdc++.h>
#include "NhanSu.cpp"
using namespace std;

int main()
{
    NhanSu **dsNhanSu;
    int n;
    cout << "Nhap so luong nhan su: ";
    cin >> n;
    dsNhanSu = new NhanSu *[n];

    // 1. Nhap danh sach nhan vien
    for (int i = 0; i < n; i++)
    {
        cout << "Chon loai nhan su (1. Bien tap vien, 2. Nguoi dung video, 3. Chuyen vien truyen thong): ";
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            dsNhanSu[i] = new BTV();
            break;
        case 2:
            dsNhanSu[i] = new NguoiDungVideo();
            break;
        case 3:
            dsNhanSu[i] = new ChuyenVienTruyenThong();
            break;
        default:
            cout << "Lua chon khong hop le!" << endl;
            i--;
            continue;
        }
        dsNhanSu[i]->Nhap();
    }

    // 2. Tinh tong luong cong ty can tra
    long tongLuong = 0;
    for (int i = 0; i < n; i++)
    {
        tongLuong += dsNhanSu[i]->TinhLuong();
    }
    cout << "Tong luong cong ty can tra la: " << tongLuong << endl;

    // 3. Tim nguoi dung video co tong so phut dung nhieu nhat
    int vitriNguoiDungVideoMax = 0;
    for (int i = 0; i < n; i++)
    {
        if (dsNhanSu[i]->LoaiNhanSu() == 2)
        {
            if (dsNhanSu[i]->getSoPhutVideo() > dsNhanSu[vitriNguoiDungVideoMax]->getSoPhutVideo())
            {
                vitriNguoiDungVideoMax = i;
            }
        }
    }
    if (dsNhanSu[vitriNguoiDungVideoMax]->getSoPhutVideo() == 0)
        cout << "Khong co nguoi dung video nao trong danh sach." << endl;
    else
    {
        cout << "Nguoi dung video co tong so phut dung nhieu nhat: " << endl;
        dsNhanSu[vitriNguoiDungVideoMax]->Xuat();
    }

    // 4. Tinh trung binh so chien dich truyen thong cua cac chuyen vien truyen thong
    int SoChuyenVien = 0;
    long TongSoChienDich = 0;
    for (int i = 0; i < n; i++)
    {
        if (dsNhanSu[i]->LoaiNhanSu() == 3)
        {
            SoChuyenVien++;
            TongSoChienDich += dsNhanSu[i]->getSoChienDich();
        }
    }
    if (SoChuyenVien > 0)
    {
        cout << "Trung binh so chien dich truyen thong cua cac chuyen vien truyen thong: "
             << (TongSoChienDich / SoChuyenVien) << endl;
    }
    else
    {
        cout << "Khong co chuyen vien truyen thong trong danh sach." << endl;
    }

    for (int i = 0; i < n; i++)
        delete dsNhanSu[i];
    delete[] dsNhanSu;

    return 0;
}