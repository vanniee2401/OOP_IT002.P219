class Ve
{
private:
    int iSoTroChoi;

public:
    void Nhap();
    long long TinhTien();
};

class CongVien
{
private:
    int SoLuong;
    Ve *ds;

public:
    void NhapDSVe();
    long long DoanhThu();
    void XuatDoanhThu();
    ~CongVien()
    {
        if (ds != NULL)
            delete ds;
    } // giải phóng sau khi đã cấp phát
};