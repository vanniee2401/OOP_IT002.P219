#include <iostream>
#include <iomanip>
#include <string>
#include "GTVT.h"
using namespace std;

void Vehicle::Nhap()
{
    cout << "Nhap ten chu xe: ";
    getline(cin, TenChuXe);

    cout << "Nhap loai xe: ";
    getline(cin, LoaiXe);

    cout << "Nhap gia tri xe: ";
    cin >> GiaXe;

    cout << "Nhap dung tich xylanh: ";
    cin >> Xylanh;
}

void Vehicle::Xuat()
{
    cout << "-----------\n";
    cout << "Ten chu xe: " << TenChuXe << endl;
    cout << "Loai xe: " << LoaiXe << endl;
    cout << "Gia tri xe: " << GiaXe << endl;
    cout << "Dung tich xylanh: " << Xylanh << endl;
    cout << "Thue phai dong: " << fixed << setprecision(0) << fThue << endl;
}

float Vehicle::TinhThue()
{
    if (Xylanh < 100)
        fThue = (float)GiaXe * 1 / 100;
    else if (100 <= Xylanh && Xylanh <= 200)
        fThue = (float)GiaXe * 3 / 100;
    else
        fThue = (float)GiaXe * 5 / 100;
    return fThue;
}

void Vehicle::Check()
{
    if (Xylanh < 0 || GiaXe < 0)
        cout << "Gia tri khong dung.";
    else
    {
        fThue = TinhThue();
    }
}
