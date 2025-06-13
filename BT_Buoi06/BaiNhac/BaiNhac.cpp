#include <bits/stdc++.h>
#include "BaiNhac.h"
using namespace std;

void KyHieu::Nhap()
{
    cout << "Nhap truong do: ";
    cin >> TruongDo;
}

bool KyHieu::LaDauLangDen()
{
    return false;
}

int KyHieu::LayCaoDo()
{
    return 0;
}

void NotNhac::Nhap()
{
    KyHieu::Nhap();
    cout << "Nhap cao do: ";
    cin >> CaoDo;
}

int NotNhac::LayCaoDo()
{
    if (CaoDo == 'C')
        return 1;
    if (CaoDo == 'D')
        return 2;
    if (CaoDo == 'E')
        return 3;
    if (CaoDo == 'F')
        return 4;
    if (CaoDo == 'G')
        return 5;
    if (CaoDo == 'A')
        return 6;
    if (CaoDo == 'B')
        return 7;
}

bool DauLang::LaDauLangDen()
{
    return true;
}

int DauLang::LayCaoDo()
{
    return 0;
}