#include <iostream>
#include <string>
#include <math.h>

using namespace std;
float v, i, r;

float aruslistrik()
{
    i = v/r;
    cout << "\nNilai Arus Listrik = "<<i;
    cout << "\n";
}

float tegangan()
{
    v = i * r;
    cout << "\nNilai tegangan = " << v;
    cout << "\n";
}
float hambatan()
{
    r = v/i;
    cout << "Nilai Hambatan = " << r;
    cout << "\n";
}




int main ()

{
    cout<<"\n=======================";
    cout<<"\nmenghitung arus listrik";
    cout<<"\nmasukkan tegangan =";cin>>v;
    cout<<"\nmasukkan hambatan =";cin>>r;
aruslistrik();

    cout<<"\n=======================";
    cout<<"\nmenghitung tegangan";
    cout<<"\nmasukkan arus listrik =";cin>>i;
    cout<<"\nmasukkan hambatan =";cin>>r;
tegangan();

    cout<<"\n=======================";
    cout<<"\nmenghitung nilai hambatan";
    cout<<"\nmasukkan nilai tegangan =";cin>>v;
    cout<<"\nmasukkan arus listrik =";cin>>i;
hambatan();

}