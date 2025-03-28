#include <iostream>
#include "GTVT.cpp"
using namespace std;

int main()
{
    Vehicle xe1("Tuong Van", "Vision", 30000000, 150);
    Vehicle xe2("Dan Vi", "Cub", 10000000, 50);
    Vehicle xe3;

    xe3.Nhap();

    xe1.Check();
    xe1.Xuat();

    xe2.Check();
    xe2.Xuat();

    xe3.Check();
    xe3.Xuat();

    return 0;
}