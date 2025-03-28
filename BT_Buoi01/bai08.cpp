#include <iostream>
using namespace std;

struct Ngay
{
    int Ngay;
    int Thang;
    int Nam;
};

void NhapNgay(Ngay &);
string ThuTrongTuan(Ngay);

int main()
{
    Ngay ngay;
    NhapNgay(ngay);
    string thu = ThuTrongTuan(ngay);
    cout << ngay.Ngay << "/" << ngay.Thang << "/" << ngay.Nam << " la " << thu;
}

void NhapNgay(Ngay &ngay)
{
    cout << "Nhap ngay thang nam: ";
    cin >> ngay.Ngay >> ngay.Thang >> ngay.Nam;
}

string ThuTrongTuan(Ngay ngay)
{
    const string thu[] = {"thu 7", "chu nhat", "thu 2", "thu 3", "thu 4", "thu 5", "thu 6"};
    if (ngay.Thang < 3)
    {
        ngay.Thang += 12;
        ngay.Nam -= 1;
    }
    int K = ngay.Nam % 100;
    int J = ngay.Nam / 100;
    int h = (ngay.Ngay + 13 * (ngay.Thang + 1) / 5 + K + K / 4 + J / 4 + 5 * J) % 7;
    return thu[h];
}