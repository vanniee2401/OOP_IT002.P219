#include <bits/stdc++.h>
#include "BDS.cpp"
using namespace std;

int main()
{
    int nDat, nNhaPho, nChungCu;
    cout << "Nhap so luong giao dich dat: ";
    cin >> nDat;
    GDDat *dat = new GDDat[nDat];
    for (int i = 0; i < nDat; i++)
    {
        cout << "Nhap giao dich dat " << i + 1 << ":" << endl;
        dat[i].Nhap();
        dat[i].TinhThanhTien();
    }
    cout << "Nhap so luong giao dich nha pho: ";
    cin >> nNhaPho;
    GDNhaPho *nhaPho = new GDNhaPho[nNhaPho];
    for (int i = 0; i < nNhaPho; i++)
    {
        cout << "Nhap giao dich nha pho " << i + 1 << ":" << endl;
        nhaPho[i].Nhap();
        nhaPho[i].TinhThanhTien();
    }
    cout << "Nhap so luong giao dich chung cu: ";
    cin >> nChungCu;
    GDChungCu *chungCu = new GDChungCu[nChungCu];
    for (int i = 0; i < nChungCu; i++)
    {
        cout << "Nhap giao dich chung cu " << i + 1 << ":" << endl;
        chungCu[i].Nhap();
        chungCu[i].TinhThanhTien();
    }

    cout << "So luong giao dich dat: " << nDat << endl;
    cout << "So luong giao dich nha pho: " << nNhaPho << endl;
    cout << "So luong giao dich chung cu: " << nChungCu << endl;

    return 0;
}