#include <bits/stdc++.h>

class BDS
{
protected:
    int MaGD;
    int Ngay;
    int Thang;
    int Nam;
    int DonGia;
    float DienTich;
    float ThanhTien;

public:
    virtual void Nhap();
    void Xuat();
    bool Check(int thang, int nam);
    virtual float TinhThanhTien() = 0;
    virtual int LoaiGiaoDich() = 0;
};

class GDDat : public BDS
{
private:
    char LoaiDat;

public:
    void Nhap();
    void Xuat();
    float TinhThanhTien();
    int LoaiGiaoDich();
};

class GDNhaPho : public BDS
{
private:
    string LoaiNha;
    string DiaChi;

public:
    void Nhap();
    void Xuat();
    float TinhThanhTien();
    int LoaiGiaoDich();
};

class GDChungCu : public BDS
{
private:
    int MaCan;
    int Tang;

public:
    void Nhap();
    void Xuat();
    float TinhThanhTien();
    int LoaiGiaoDich();
};