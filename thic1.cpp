#include <iostream>
#include <math.h>
using namespace std;
int main() 
{
 string Hoten;
 int NS;
 double DiemLT, DiemTH, DiemTB;
 char Xeploai;
 cout << "Nhap Ho va ten: "<<endl;
 getline(cin,Hoten);
 cout << "Nhap nam sinh: "<<endl;
 cin >>NS;
 cout << "Nhap diem ly thuyet va diem thuc hanh: "<< endl;
 cin>> DiemLT >> DiemTH;
 DiemTB=(DiemLT+DiemTH)/2;
 if(DiemTB>=8) Xeploai='A';
 else if (DiemTB>=5 && DiemTB<8) Xeploai='B';
 else if (DiemTB<5) Xeploai='C';
 else cout << "Diem trung binh khong hop le"<<endl;
 cout << Hoten<<endl << NS << endl << DiemLT <<endl<< DiemTH << endl << DiemTB << endl << Xeploai;
}