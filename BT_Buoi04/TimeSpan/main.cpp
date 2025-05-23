#include <bits/stdc++.h>
#include "TimeSpan.cpp"
#include "Time.cpp"
using namespace std;

int main()
{
    CTimeSpan a, b, c;
    cout << "Nhap thoi gian da hoc: ";
    cin >> a;
    cout << "Nhap thoi gian hoc them: ";
    cin >> b;

    cout << "Thoi gian da hoc: " << a << endl;
    cout << "Thoi gian hoc them: " << b << endl;

    c = a + b;
    cout << "Tong thoi gian da hoc: " << c << endl;

    c = a - b;
    cout << "Hieu thoi gian da hoc: " << c << endl;

    if (a > b)
    {
        cout << "Thoi gian da hoc nhieu hon thoi gian hoc them.";
    }

    if (a < b)
    {
        cout << "Thoi gian da hoc it hon thoi gian hoc them.";
    }

    CTime t1, t2, t3;
    cout << "Nhap thoi diem vao hoc: ";
    cin >> t1;
    cout << "Nhap thoi gian tan hoc: ";
    cin >> t2;
    cout << "Thoi gian vao hoc: " << t1 << endl;
    cout << "Thoi gian tan hoc: " << t2 << endl;
    t3 = t2 - t1;
    cout << "Tong thoi gian da hoc: " << t3 << endl;
    t3 = t1 + a;
    cout << "Thoi gian vao hoc + thoi gian da hoc: " << t3 << endl;
    int giay;
    cout << "Nhap so giay: ";
    cin >> giay;
    t3 = t1 + giay;
    cout << "Thoi gian vao hoc + so giay: " << t3 << endl;
    t3 = t1 - giay;
    cout << "Thoi gian vao hoc - so giay: " << t3 << endl;
}