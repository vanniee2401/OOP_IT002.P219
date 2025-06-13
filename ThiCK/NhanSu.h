#include <bits/stdc++.h>

class NhanSu
{
protected:
    string HoTen;
    int MaNV;
    int NamSinh;
    int LuongCoBan;
    long Luong;

public:
    virtual void Nhap();
    virtual void Xuat();
    virtual long TinhLuong() = 0;
    virtual int LoaiNhanSu() = 0;
    virtual int getSoChienDich() const;
    virtual int getSoPhutVideo() const;
};

class BTV : public NhanSu
{
private:
    int SoBaiViet;
    int TongLuotXem;

public:
    void Nhap();
    void Xuat();
    long TinhLuong();
    int LoaiNhanSu();
};

class NguoiDungVideo : public NhanSu
{
private:
    int SoPhutVideo;

public:
    void Nhap();
    void Xuat();
    long TinhLuong();
    int LoaiNhanSu();
    int getSoPhutVideo() const;
};

class ChuyenVienTruyenThong : public NhanSu
{
private:
    int SoChienDich;

public:
    void Nhap();
    void Xuat();
    long TinhLuong();
    int LoaiNhanSu();
    int getSoChienDich() const;
};