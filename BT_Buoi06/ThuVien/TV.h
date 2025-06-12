class Sach
{
protected:
    int SoLuong;
    int DonGia;
    string MaSach;
    string TenSach;
    string NXB;
    int LoaiSach;

public:
    virtual int TinhTien() = 0;
    virtual void Nhap();
    virtual void Xuat();
    bool isNXB(string s);
    bool isSGK();
};

class SGK : public Sach
{
private:
    int TinhTrang;

public:
    int TinhTien();
    void Nhap();
    void Xuat();
};

class STK : public Sach
{
private:
    int TienThue;

public:
    int TinhTien();
    void Nhap();
    void Xuat();
};