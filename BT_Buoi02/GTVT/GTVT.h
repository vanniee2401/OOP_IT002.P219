#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
private:
    string TenChuXe;
    string LoaiXe;
    long long GiaXe;
    int Xylanh;
    float fThue;

public:
    Vehicle(string name, string type, int price, int xylanh)
    {
        TenChuXe = name;
        LoaiXe = type;
        GiaXe = price;
        Xylanh = xylanh;
    }
    Vehicle() : TenChuXe(""), LoaiXe(""), GiaXe(0), Xylanh(0), fThue(0) {}
    void Nhap();
    void Xuat();
    float TinhThue();
    void Check();
};