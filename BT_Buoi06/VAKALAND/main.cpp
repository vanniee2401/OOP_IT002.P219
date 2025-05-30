
#include <bits/stdc++.h>
#include "BDS.cpp"
using namespace std;

int main()
{
    BDS **dsBDS;
    int n;
    cout << "Nhap so luong giao dich: ";
    cin >> n;
    dsBDS = new BDS *[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Chon loai giao dich (1. Nha Dat, 2. Nha Pho, 3. Chung Cu): ";
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            dsBDS[i] = new GDDat();
            dsBDS[i]->Nhap();
            break;
        case 2:
            dsBDS[i] = new GDNhaPho();
            dsBDS[i]->Nhap();
            break;
        case 3:
            dsBDS[i] = new GDChungCu();
            dsBDS[i]->Nhap();
            break;
        default:
            cout << "Lua chon khong hop le!" << endl;
            i--; // De nhap lai giao dich
        }
    }

    int nDat = 0, nNhaPho = 0, nChungCu = 0;
    for (int i = 0; i < n; i++)
    {
        if (dsBDS[i]->LoaiGiaoDich() == 1)
            nDat++;
        else if (dsBDS[i]->LoaiGiaoDich() == 2)
            nNhaPho++;
        else if (dsBDS[i]->LoaiGiaoDich() == 3)
            nChungCu++;
    }
    cout << "So luong giao dich dat: " << nDat << endl;
    cout << "So luong giao dich nha pho: " << nNhaPho << endl;
    cout << "So luong giao dich chung cu: " << nChungCu << endl;

    int SumChungCu = 0;
    for (int i = 0; i < n; i++)
    {
        if (dsBDS[i]->LoaiGiaoDich() == 3)
        {
            SumChungCu += dsBDS[i]->TinhThanhTien();
        }
    }
    int TBChungCu = SumChungCu / nChungCu;
    cout << "Trung binh thanh tien giao dich chung cu: " << TBChungCu << endl;

    int maxNhaPho = 0, max = 0;
    for (int i = 0; i < n; i++)
    {
        if (dsBDS[i]->LoaiGiaoDich() == 2)
        {
            if (maxNhaPho < dsBDS[i]->TinhThanhTien())
            {
                max = i;
                maxNhaPho = dsBDS[i]->TinhThanhTien();
            }
        }
    }
    cout << "Giao dich Nha Pho co gia tri cao nhat la:";
    dsBDS[max]->Xuat();

    cout << "Danh sach cac giao dich thang 12 nam 2024:" << endl;
    for (int i = 0; i < n; i++)
    {
        if (dsBDS[i]->Check(12, 2024))
        {
            dsBDS[i]->Xuat();
            cout << "Thanh tien: " << dsBDS[i]->TinhThanhTien() << endl;
        }
    }
    return 0;
}