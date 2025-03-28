class SoPhuc
{
private:
    float fSoThuc;
    float fSoAo;

public:
    void Nhap();
    void Xuat();
    SoPhuc Cong(SoPhuc b);
    SoPhuc Tru(SoPhuc b);
    SoPhuc Nhan(SoPhuc b);
    SoPhuc Chia(SoPhuc b);
};