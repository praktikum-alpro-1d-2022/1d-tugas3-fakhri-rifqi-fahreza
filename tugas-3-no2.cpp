#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main (){
    float praktikum = 75, uts = 70, uas = 88;
    float NilaiAkhir;

    NilaiAkhir = (praktikum * 20/100) + (uts * 30/100) + (uas * 50/100);

    cout << "Nilai akhirnya adalah = " << NilaiAkhir << endl;
    cout << "Nilai praktikum = " << praktikum << endl;
    cout << "Nilai uts = " << uts << endl;
    cout << "Nilai uas = " << uas << endl;


    return 0;
}