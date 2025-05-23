#include <bits/stdc++.h>
using namespace std;

class CTimeSpan
{
private:
    int Gio;
    int Phut;
    int Giay;

public:
    CTimeSpan(int gio = 0, int phut = 0, int giay = 0) : Gio(gio), Phut(phut), Giay(giay) {}
    friend istream &operator>>(istream &is, CTimeSpan &a);
    friend ostream &operator<<(ostream &os, const CTimeSpan &a);
    int getGio() const { return Gio; }
    int getPhut() const { return Phut; }
    int getGiay() const { return Giay; }
    CTimeSpan(const CTimeSpan &a) : Gio(a.Gio), Phut(a.Phut), Giay(a.Giay) {}
    CTimeSpan operator+(const CTimeSpan &a) const
    {
        CTimeSpan result = *this;
        if (result.Giay + a.Giay >= 60)
        {
            result.Giay = result.Giay + a.Giay - 60;
            result.Phut++;
        }
        else
            result.Giay += a.Giay;

        if (result.Phut + a.Phut >= 60)
        {
            result.Phut = result.Phut + a.Phut - 60;
            result.Gio++;
        }
        else
            result.Phut += a.Phut;

        result.Gio += a.Gio;

        return result;
    }

    CTimeSpan operator-(const CTimeSpan &a) const
    {
        CTimeSpan result = *this;
        if (result.Giay - a.Giay < 0)
        {
            result.Phut--;
            result.Giay = result.Giay + 60 - a.Giay;
        }
        else if (result.Giay - a.Giay >= 0)
            result.Giay -= a.Giay;

        if (result.Phut - a.Phut < 0)
        {
            result.Gio--;
            result.Phut = result.Phut + 60 - a.Phut;
        }
        else if (result.Phut - a.Phut >= 0)
            result.Phut -= a.Phut;

        result.Gio -= a.Gio;

        return result;
    }
    bool operator==(CTimeSpan a)
    {
        return (this->Giay == a.Giay && this->Phut == a.Phut && this->Gio == a.Gio);
    }
    bool operator!=(CTimeSpan a)
    {
        return (this->Giay != a.Giay || this->Phut != a.Phut || this->Gio != a.Gio);
    }
    bool operator>(CTimeSpan a)
    {
        if (this->Gio > a.Gio)
            return true;
        if (this->Gio == a.Gio)
        {
            if (this->Phut > a.Phut)
                return true;
            else if (this->Phut == a.Phut)
            {
                if (this->Giay > a.Giay)
                    return true;
            }
        }
        return false;
    }
    bool operator>=(CTimeSpan a)
    {
        if (this->Gio >= a.Gio)
            return true;
        if (this->Gio == a.Gio)
        {
            if (this->Phut >= a.Phut)
                return true;
            else if (this->Phut == a.Phut)
            {
                if (this->Giay >= a.Giay)
                    return true;
            }
        }
        return false;
    }
    bool operator<(CTimeSpan a)
    {
        if (this->Gio < a.Gio)
            return true;
        if (this->Gio == a.Gio)
        {
            if (this->Phut < a.Phut)
                return true;
            else if (this->Phut == a.Phut)
            {
                if (this->Giay < a.Giay)
                    return true;
            }
        }
        return false;
    }
    bool operator<=(CTimeSpan a)
    {
        if (this->Gio <= a.Gio)
            return true;
        if (this->Gio == a.Gio)
        {
            if (this->Phut <= a.Phut)
                return true;
            else if (this->Phut == a.Phut)
            {
                if (this->Giay <= a.Giay)
                    return true;
            }
        }
        return false;
    }
};
istream &operator>>(istream &is, CTimeSpan &a)
{
    is >> a.Gio >> a.Phut >> a.Giay;
    a.Phut += a.Giay / 60;
    a.Giay = a.Giay % 60;
    a.Gio += a.Phut / 60;
    a.Phut = a.Phut % 60;
    return is;
}

ostream &operator<<(ostream &os, const CTimeSpan &a)
{
    os << a.Gio << ":" << a.Phut << ":" << a.Giay;
    return os;
}
