#include <iostream>
using namespace std;

int main() {
// Variabel input
string nama, TempatTinggal, pangkat;
int umur;
double UangTabungan;

// Input data
cout<<"Masukkan nama: ";
getline(cin, nama);

cout<<"Masukkan umur: ";
cin>>umur;

cout<<"Masukkan tempat tinggal: ";
cin.ignore();
getline(cin, TempatTinggal);

cout<<"Masukkan uang tabungan dalam dollar: ";
cin>>UangTabungan;

// Analisa ciri-ciri
if (umur>40&&(TempatTinggal=="Nevada"||TempatTinggal=="New York"||TempatTinggal=="Havana")&&UangTabungan>10000000){
pangkat="Don";
} else if (umur>=25&&umur<=40&&(TempatTinggal=="New Jersey"||TempatTinggal=="Manhattan"||TempatTinggal=="Nevada")&&UangTabungan>=1000000&&UangTabungan<=2000000){
pangkat="Underboss";
} else if (umur>=18&&umur<=24&&(TempatTinggal=="California"||TempatTinggal=="Detroit"||TempatTinggal=="Boston")&&UangTabungan<1000000){
pangkat="Capo";
} else {
cout<<nama<<" tidak mencurigakan."<<endl;
return 0;
}
// Output hasil analisa
cout<<nama<<" kemungkinan adalah seorang anggota mafia dengan "<<pangkat<<"."<< endl;
return 0;
}
