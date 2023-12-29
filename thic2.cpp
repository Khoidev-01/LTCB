#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

double tinh (int n, double a)
{
    a=1;
    for (int i=0; i<n; i++)
    {
        a=a*pow(a,i);
    }
}

int main ()
{   
    double x, n;
    double S=0;
    cout << "Nhap vao 2 so nguyen x va n: "<< endl;
    cin >> x >>n;
    if (n<0) cout << "Nhap n>0";
    else 
    {
        for (int i=1; i<=n; i++)
        {
            S=S+i/double(tinh(n,x));
        }
    }
    cout << S;
return 0;
}