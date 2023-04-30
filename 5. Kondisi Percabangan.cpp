#include <iostream>
using namespace std;
int main(){
 int umur, tinggi, tarif;
    cout<<"Masukkan umur anak: ";
    cin>>umur;
    if (umur<1){
        cout<<"Dilarang masuk"<<endl;
        return 0;
    }
    cout<<"Masukkan tinggi anak dalam cm: ";
    cin>>tinggi;

    if (umur<3){
        tarif=30000;
        if (tinggi>70 && umur >= 2 && umur <= 3){
            tarif+=10000;
        }
    } else if (umur<7){
        tarif=40000;
        if (tinggi>120 && umur >= 4 && umur <=7){
            tarif+=15000;
        }
    } else if (umur<10){
        tarif=50000;
        if (tinggi>150 && umur >= 8 && umur <= 10){
            tarif+=20000;
        }
    } else {
        tarif=80000;
    }
    cout<<"Tarif yang harus dibayar: Rp "<<tarif<<endl;
    return 0;
}
