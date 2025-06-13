#include <bits/stdc++.h>
#include "BaiNhac.cpp"
using namespace std;

int main()
{
    int n, opt;
    cout << "Nhap so ky hieu: ";
    cin >> n;
    KyHieu **song;
    song = new KyHieu *[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Soan ban nhac (1. Not nhac, 2. Dau lang): ";
        cin >> opt;
        switch (opt)
        {
        case 1:
            song[i] = new NotNhac();
            song[i]->Nhap();
            break;
        case 2:
            song[i] = new DauLang();
            song[i]->Nhap();
            break;
        }
    }

    int SoDauLang = 0;
    for (int i = 0; i < n; i++)
    {
        if (song[i]->LaDauLangDen())
            SoDauLang++;
    }
    cout << "So dau lang den trong ban nhac la: " << SoDauLang;

    int vitriCaoDoCaoNhat = 0;
    for (int i = 0; i < n; i++)
    {
        if (song[i]->LayCaoDo() > song[vitriCaoDoCaoNhat]->LayCaoDo)
            vitriCaoDoCaoNhat = i;
    }
    cout << "Not nhac co cao do cao nhat la: ";
    switch (song[vitriCaoDoCaoNhat]->LayCaoDo())
    {
    case 0:
        cout << "Khong co cao do.";
    case 1:
        cout << "Not Do.";
        break;
    case 2:
        cout << "Not Re.";
        break;
    case 3:
        cout << "Not Mi.";
        break;
    case 4:
        cout << "Not Fa.";
        break;
    case 5:
        cout << "Not Sol.";
        break;
    case 6:
        cout << "Not La.";
        break;
    case 7:
        cout << "Not Si.";
        break;
    }
}