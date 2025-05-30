#include <bits/stdc++.h>
using namespace std;

void heapify(int a[], int n, int i)
{
    int max = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && a[l] > a[max])
    {
        max = l;
    }

    if (r < n && a[r] > a[max])
    {
        max = r;
    }

    if (max != i)
    {
        swap(a[i], a[max]);
        heapify(a, n, max);
    }
}

void heapsort(int a[], int n)
{
    // tao heap max
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(a, n, i);
    }

    // tao heap min
    for (int i = n - 1; i >= 0; i--)
    {
        swap(a[0], a[i]);
        heapify(a, i, 0);
    }
}

int main()
{
    int a[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(a) / sizeof(a[0]);
    heapsort(a, n);
    cout << "Mang sau khi sap xep: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}