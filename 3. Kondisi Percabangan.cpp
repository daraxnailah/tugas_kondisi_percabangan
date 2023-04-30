#include <iostream>
using namespace std;
int main()
{
int NomorPunggung;
cout<<"Masukkan nomor punggung pemain: ";
cin>>NomorPunggung;

if (NomorPunggung % 2 == 0){
    cout<<"Posisi: Target attacker"<<endl;
}
if (NomorPunggung % 2 == 0 && NomorPunggung >= 50 && NomorPunggung <= 100){
    cout<<"Capten team"<<endl;
}
if (NomorPunggung % 2 != 0){
    cout<<"Posisi: Defender"<<endl;
}
if (NomorPunggung % 2 != 0 && NomorPunggung > 90){
    cout<<"Posisi: Playmaker"<<endl;
}
if (NomorPunggung % 3 == 0 && NomorPunggung % 5 == 0 && NomorPunggung % 2 != 0){
    cout << "Posisi: Keeper" << endl;
}
return 0;
}
