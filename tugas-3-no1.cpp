#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main (){
   

    float alas = 8, tinggi = 10;
    float miring;


    miring = sqrt ( pow(alas,2) + pow(tinggi,2) );

    cout << "Nilai sisi miring = " << miring << endl;
    cout << "Nilai Alas = " << alas << endl;
    cout << "Nilai tinggi = " << tinggi << endl;

    return 0;
}