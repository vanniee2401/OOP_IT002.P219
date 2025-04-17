#include <bits/stdc++.h>
using namespace std;
#include "DaGiac.cpp"

int main()
{
    int n;
    cout << "Nhap so dinh: ";
    cin >> n;
    DaGiac dg(n);
    dg.NhapDaGiac();

    float x, y;
    cout << "Nhap khoang cach tinh tien: ";
    cin >> x >> y;
    dg.TinhTienDaGiac(x, y);
    cout << "Da giac sau khi tinh tien: \n";
    dg.XuatDaGiac();

    float k;
    cout << "Nhap he so phong to: ";
    cin >> k;
    dg.PhongToDaGiac(k);
    cout << "Da giac sau khi phong to: \n";
    dg.XuatDaGiac();

    cout << "Nhap he so thu nho: ";
    cin >> k;
    dg.ThuNhoDaGiac(k);
    cout << "Da giac sau khi thu nho: \n";
    dg.XuatDaGiac();

    float alpha;
    cout << "Nhap goc quay: ";
    cin >> alpha;
    dg.QuayDaGiac(alpha);
    cout << "Da giac sau khi quay: \n";
    dg.XuatDaGiac();

    DaGiac dup(dg);
    cout << "Da giac sao chep: \n";
    dup.XuatDaGiac();

    return 0;
}