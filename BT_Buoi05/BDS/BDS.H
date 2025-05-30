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
    int *dsBDS;

public:
    void Nhap();
    void Xuat();
    bool Check(int nam = 0, int thang = 0, int ngay = 0);
    int TongGD();
};

class GDDat : public BDS
{
private:
    char LoaiDat;

public:
    void Nhap();
    float TinhThanhTien();
};

class GDNhaPho : public BDS
{
private:
    string LoaiNha;
    string DiaChi;

public:
    void Nhap();
    float TinhThanhTien();
    GDNhaPho maxGD();
};

class GDChungCu : public BDS
{
private:
    int MaCan;
    int Tang;

public:
    void Nhap();
    float TinhThanhTien();
};