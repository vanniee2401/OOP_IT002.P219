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
    case "C":
        cout << "Not Do.";
        break;
    case "D":
        cout << "Not Re.";
        break;
    case "E":
        cout << "Not Mi.";
        break;
    case "F":
        cout << "Not Fa.";
        break;
    case "G":
        cout << "Not Sol.";
        break;
    case "A":
        cout << "Not La.";
        break;
    case "B":
        cout << "Not Si.";
        break;
    }
}