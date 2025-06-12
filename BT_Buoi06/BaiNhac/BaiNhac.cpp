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

char KyHieu::LayCaoDo()
{
    return 'Z';
}

void NotNhac::Nhap()
{
    KyHieu::Nhap();
    cout << "Nhap cao do: ";
    cin >> CaoDo;
}

char NotNhac::LayCaoDo()
{
    return CaoDo;
}

bool DauLang::LaDauLangDen()
{
    return true;
}

char DauLang::LayCaoDo()
{
    return 'Z';
}