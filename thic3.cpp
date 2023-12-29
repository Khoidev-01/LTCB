#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

struct DS
{
    string Manv;
    string Hoten;
    int NS;
    double HSLuong;
    double Tienluong;
};

void nhapds (DS danhsach [], int n)
{
    for ( int i =0; i<n; i++)
    {
        cout << "Nhap ma nhan vien: "<<endl;
        cin.ignore();
        getline(cin, danhsach[i].Manv);
        cout << "Nhap ten nhan vien: "<<endl;
        cin.ignore();
        getline(cin, danhsach[i].Hoten);
        cout <<"Nhap nam sinh: "<<endl;
        cin>>danhsach[i].NS;
        cout << "Nhap he so luong: "<<endl;
        cin>>danhsach[i].HSLuong;
    }
}

void tinhluong (DS danhsach[], int n)
{
    for (int i=0; i<n; i++)
    {
        danhsach[i].Tienluong=danhsach[i].HSLuong*1800000;
        cout << danhsach[i].Tienluong<<endl;
    }
}

void in(DS danhsach[], int n)
{
    for (int i=0; i<n; i++)
    {
        if(danhsach[i].HSLuong>=3.0) cout << danhsach[i].Hoten;
    }
}

bool ktra( DS danhsach[], int n, string Ma)
{
    for (int i=0; i<n; i++)
    {
       if (danhsach[i].Manv==Ma)
       {
        return 1;
       }
        else return 0;
    }
}

int main()
{   
    int n;
    string Ma;
    cout << "Nhap so luong nhan vien: ";
    cin >> n;
    DS danhsach [50];
    nhapds( danhsach, n);
    tinhluong (danhsach,n);
    in(danhsach,n);
    cout<< "Nhap ma nhan vien can kiem tra: ";
    cin.ignore();
    getline(cin,Ma);
    if (ktra(danhsach,n,Ma)==1) cout << "Co nhan vien trong danh sach";
    else cout << "Khong co trong danh sach";
    return 0;
}