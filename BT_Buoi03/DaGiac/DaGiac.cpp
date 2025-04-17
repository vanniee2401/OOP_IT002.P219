#include <bits/stdc++.h>
using namespace std;

class Diem
{
private:
    float fHoanh;
    float fTung;

public:
    Diem(float x = 0, float y = 0) : fHoanh(x), fTung(y) {}
    float getX() { return fHoanh; }
    float getY() { return fTung; }
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

class DaGiac
{
private:
    int n;
    Diem *D;

public:
    DaGiac(int n) : n(n), D(new Diem[n]) {}
    ~DaGiac()
    {
        delete[] D;
    }
    void NhapDaGiac()
    {
        for (int i = 0; i < n; i++)
        {
            cout << "Nhap diem " << i + 1 << ":\n";
            D[i].NhapDiem();
        }
    }
    void XuatDaGiac()
    {
        for (int i = 0; i < n; i++)
        {
            cout << "Toa do diem " << i + 1 << " la: x = " << D[i].getX() << ", y = " << D[i].getY() << endl;
        }
    }
    DaGiac(DaGiac &other)
    {
        n = other.n;
        D = new Diem[n];
        for (int i = 0; i < n; i++)
        {
            D[i] = other.D[i];
        }
    }
    void TinhTienDaGiac(float x, float y)
    {
        for (int i = 0; i < n; i++)
        {
            D[i].TinhTien(x, y);
        }
    }
    void PhongToDaGiac(float k)
    {
        for (int i = 0; i < n; i++)
        {
            D[i].PhongTo(k);
        }
    }
    void ThuNhoDaGiac(float k)
    {
        for (int i = 0; i < n; i++)
        {
            D[i].ThuNho(k);
        }
    }
    void QuayDaGiac(float alpha)
    {
        for (int i = 0; i < n; i++)
        {
            D[i].Quay(alpha);
        }
    }
};