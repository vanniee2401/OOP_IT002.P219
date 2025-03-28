#include <iostream>
using namespace std;

struct Lich
{
    int iNgay;
    int iThang;
    int iNam;
};

void Nhap(Lich &Nay)
{
    cin >> Nay.iNgay >> Nay.iThang >> Nay.iNam;
}

bool NgayHopLe(Lich Nay, int NgayMax)
{
    if (Nay.iNgay < 1 || Nay.iNgay > NgayMax || Nay.iThang < 1 || Nay.iThang > 12 || Nay.iNam < 1)
        return false;
    return true;
}

bool NamNhuan(int nam)
{
    if ((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0)
        return true;
    return false;
}

int SoNgayTrongThang(int nam, int thang)
{
    if (NamNhuan(nam) && thang == 2)
        return 29;
    else
    {
        switch (thang)
        {
        case 2:
            return 28;
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
            break;
        }
    }
}

Lich TinhNgay(Lich &Nay, int NgayMax)
{
    if (Nay.iNgay + 1 > NgayMax)
    {
        Nay.iNgay = 1;
        Nay.iThang += 1;
        if (Nay.iThang > 12)
        {
            Nay.iThang = 1;
            Nay.iNam += 1;
        }
    }
    return Nay;
}

void Xuat(Lich Mai)
{
    cout << Mai.iNgay << "/" << Mai.iThang << "/" << Mai.iNam;
}

int main()
{
    Lich HomNay;
    Nhap(HomNay);
    int NgayMax = SoNgayTrongThang(HomNay.iNam, HomNay.iThang);
    if (NgayHopLe(HomNay, NgayMax))
    {
        Lich NgayMai = TinhNgay(HomNay, NgayMax);
        Xuat(NgayMai);
    }
    else
        cout << "Ngay khong hop le!";
}