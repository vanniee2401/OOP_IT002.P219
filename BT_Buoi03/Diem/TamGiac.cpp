#include <bits/stdc++.h>
using namespace std;

class Diem
{
private:
    float fHoanh;
    float fTung;

public:
    Diem(float x = 0, float y = 0) : fHoanh(x), fTung(y) {}
    Diem getPoint() { return Diem(fHoanh, fTung); }
    float getX() { return fHoanh; }
    float getY() { return fTung; }
    void setHoanh(float x) { fHoanh = x; }
    void setTung(float y) { fTung = y; }
    void TinhTien(float x, float y)
    {
        fHoanh += x;
        fTung += y;
    }
    Diem NhapDiem()
    {
        cout << "Nhap hoanh do: ";
        cin >> fHoanh;
        cout << "Nhap tung do: ";
        cin >> fTung;
        return *this;
    }
    void PhongTo(float k)
    {
        fHoanh *= k;
        fTung *= k;
    }
    void ThuNho(float k)
    {
        fHoanh /= k;
        fTung /= k;
    }
    void Quay(float alpha)
    {
        float rad = alpha * 3.14 / 180;
        float newX = fHoanh * cos(rad) - fTung * sin(rad);
        float newY = fHoanh * sin(rad) - fTung * cos(rad);
        fHoanh = newX;
        fTung = newY;
    }
};

class TamGiac
{
private:
    Diem A, B, C;

public:
    bool KiemTraTamGiac()
    {
        return (1 / 2) * (A.getX() * (B.getY() - C.getY()) + B.getX() * (C.getY() - A.getY()) + C.getX() * (A.getY() - B.getY() == 0));
    }
    void NhapTamGiac()
    {
        do
        {
            cout << "Nhap diem A: ";
            A.NhapDiem();
            cout << "Nhap diem B ";
            B.NhapDiem();
            cout << "Nhap diem C: ";
            C.NhapDiem();
        } while (KiemTraTamGiac());
    }
    void PhongToTamGiac(int k)
    {
        A.PhongTo(k);
        B.PhongTo(k);
        C.PhongTo(k);
    }
    void ThuNhoTamGiac(int k)
    {
        A.ThuNho(k);
        B.ThuNho(k);
        C.ThuNho(k);
    }
    void QuayTamGiac(float alpha)
    {
        A.Quay(alpha);
        B.Quay(alpha);
        C.Quay(alpha);
    }
    void XuatTamGiac()
    {
        cout << "Toa do diem A: x= " << A.getX() << ", y= " << A.getY();
        cout << "Toa do diem B: x= " << B.getX() << ", y= " << B.getY();
        cout << "Toa do diem C: x= " << C.getX() << ", y= " << C.getY();
    }
};