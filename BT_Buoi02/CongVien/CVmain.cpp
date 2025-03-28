#include <iostream>
#include "CongVien.cpp"

int main()
{
    CongVien DamSen;
    DamSen.NhapDSVe();
    DamSen.XuatDoanhThu();
    DamSen.~CongVien();
}