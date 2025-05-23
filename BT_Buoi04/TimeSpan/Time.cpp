#include <bits/stdc++.h>
#include "TimeSpan.cpp"
using namespace std;

class CTime
{
private:
    int Gio;
    int Phut;
    int Giay;

public:
    CTime(int gio = 0, int phut = 0, int giay = 0) : Gio(gio), Phut(phut), Giay(giay) {}
    friend istream &operator>>(istream &is, CTime &a);
    friend ostream &operator<<(ostream &os, const CTime &a);
    CTime(const CTimeSpan &a) : Gio(a.getGio()), Phut(a.getPhut()), Giay(a.getGiay()) {}
    CTime(const CTime &a) : Gio(a.Gio), Phut(a.Phut), Giay(a.Giay) {}
    CTime operator++()
    {
        return *this + CTimeSpan(0, 0, 1);
    }
    CTime operator--()
    {
        return *this + CTimeSpan(0, 0, -1);
    }
    CTime operator+(const CTimeSpan &span) const
    {
        int tongGiay = Gio * 3600 + Phut * 60 + Giay + span.getGio() * 3600 + span.getPhut() * 60 + span.getGiay();
        return CTime(tongGiay / 3600, (tongGiay % 3600) / 60, tongGiay % 60);
    }
    CTimeSpan operator-(const CTime &a) const
    {
        int t1 = Gio * 3600 + Phut * 60 + Giay;
        int t2 = a.Gio * 3600 + a.Phut * 60 + a.Giay;
        int khoang = abs(t1 - t2);
        return CTimeSpan(khoang / 3600, (khoang % 3600) / 60, khoang % 60);
    }
    CTime operator+(int giay) const
    {
        int tongGiay = Gio * 3600 + Phut * 60 + Giay + giay;
        return CTime(tongGiay / 3600, (tongGiay % 3600) / 60, tongGiay % 60);
    }
    CTime operator-(int giay) const
    {
        int tongGiay = Gio * 3600 + Phut * 60 + Giay - giay;
        return CTime(tongGiay / 3600, (tongGiay % 3600) / 60, tongGiay % 60);
    }
};

istream &operator>>(istream &is, CTime &a)
{
    is >> a.Gio >> a.Phut >> a.Giay;
    a.Phut += a.Giay / 60;
    a.Giay = a.Giay % 60;
    a.Gio += a.Phut / 60;
    a.Phut = a.Phut % 60;
    return is;
}

ostream &operator<<(ostream &os, const CTime &a)
{
    os << a.Gio << ":" << a.Phut << ":" << a.Giay;
    return os;
}