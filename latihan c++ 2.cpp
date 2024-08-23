/'
Contoh script program dengan menggunakan file header math.h
'/
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

main ()
(
    int a=45, b=4, c=2;
    float ipangkat, iakar, isin, icos, itan;

    iakar = sqrt(b);
    cout<<"Akar dari "<<b<<" adalah"<<iakar<<endl;

    ipangkat = pow(b,c);
    cout<<b<<" pangkat "<<c<<" adalah"<<ipangkat<<endly;

    isin = sin(a);
    cout<<"sin sudut "<<a<<" derajat adalah"<<isin<<endl;

    icos = cos(a);
    cout<<"cos sudut "<<a<<" derajat adalah"<<icos<<endl;

    itan = tan(a);
    cout<<"tan sudut "<<a<<" derajat adalah"<<itan;

    getch();
)