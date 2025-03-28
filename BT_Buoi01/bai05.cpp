#include <iostream>
#include <string>
using namespace std;

struct HocSinh
{
    string TenHS;
    float fDiemToan;
    float fDiemVan;
};

struct LopHoc
{
    float fDTBChung;
    HocSinh *hs;
};

void NhapDSLop(HocSinh *, int);
float DTBRieng(float, float);
void HSCaoNhat(HocSinh *, int);
void HSThaphonDTBChung(HocSinh *, int);
float DTBChung(HocSinh *, int);

int main()
{
    int SoLuong;
    cout << "Nhap so luong hoc sinh: ";
    cin >> SoLuong;
    HocSinh *hs = new HocSinh[SoLuong];
    NhapDSLop(hs, SoLuong);
    HSCaoNhat(hs, SoLuong);
    HSThaphonDTBChung(hs, SoLuong);
    delete[] hs;
}

void NhapDSLop(HocSinh *hs, int N)
{
    for (int i = 0; i < N; i++)
    {
        cout << "Nhap ten hs " << i + 1 << ": ";
        cin.ignore();
        getline(cin, hs[i].TenHS);
        cout << "Nhap diem Toan: ";
        cin >> hs[i].fDiemToan;
        cout << "Nhap diem Van: ";
        cin >> hs[i].fDiemVan;
    }
}

float DTBRieng(float fDiemToan, float fDiemVan)
{
    return (fDiemToan + fDiemVan) / 2.0;
}

void HSCaoNhat(HocSinh *hs, int N)
{
    cout << "Danh sach hoc sinh co DTB cao nhat lop: \n";
    float DTBMax = 0;
    for (int i = 0; i < N; i++)
    {
        int DTB = DTBRieng(hs[i].fDiemToan, hs[i].fDiemVan);
        if (DTB > DTBMax)
            DTBMax = DTB;
    }
    for (int i = 0; i < N; i++)
    {
        int DTB = DTBRieng(hs[i].fDiemToan, hs[i].fDiemVan);
        if (DTB == DTBMax)
            cout << hs[i].TenHS << endl;
    }
}

float DTBChung(HocSinh *hs, int N)
{
    int DTBTong = 0;
    for (int i = 0; i < N; i++)
    {
        DTBTong += DTBRieng(hs[i].fDiemToan, hs[i].fDiemVan);
    }
    return DTBTong / N;
}

void HSThaphonDTBChung(HocSinh *hs, int N)
{
    int DTBLop = DTBChung(hs, N);
    int check = 0;
    cout << "Danh sach hoc sinh co DTB thap hon DTB chung cua lop: \n";
    for (int i = 0; i < N; i++)
    {
        int DTB = DTBRieng(hs[i].fDiemToan, hs[i].fDiemVan);
        if (DTB < DTBLop)
        {
            cout << hs[i].TenHS << endl;
            check++;
        }
        i++;
    }
    if (check != 0)
        cout << "Khong co.";
}