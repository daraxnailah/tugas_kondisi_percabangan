#include <iostream>
using namespace std;
int main()
{
int lari, PushUp, plank, TotalKalori;
cout<<"Masukkan jumlah waktu lari (dalam menit): ";
cin>>lari;

cout<<"Masukkan jumlah waktu push-up (dalam menit): ";
cin>>PushUp;

cout<<"Masukkan jumlah waktu plank (dalam menit): ";
cin>>plank;

TotalKalori=(lari/5)*60+(PushUp/30)*200+(plank*5);

cout<<"Jumlah kalori yang terbakar adalah: "<<TotalKalori<<" kalori";
return 0;
}
