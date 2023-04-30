#include <iostream>
using namespace std;
int main(){
  int coding, interview;
  char nilai;
  cout << "Masukkan nilai coding : ";
  cin >> coding;

  if (coding>80){
    cout<<"Hasil tes : LOLOS"<<endl;
  } else if (coding>=60&&coding<=80){
    cout<<"Masukkan nilai interview (A/B) : ";
    cin>>nilai;

  if (nilai=='A'||nilai=='B'){
      cout<<"Hasil tes : LOLOS"<<endl;
  } else{
    cout<<"Hasil tes : GAGAL"<<endl;
    }
  } else{
    cout<<"Hasil tes : GAGAL"<<endl;
  }
  if (coding>=60&&coding<=80&&(nilai=='A'||nilai=='B')){
    cout<<"Selamat Kamu Berhasil Menjadi Calon Programmer"<<endl;
  } else{
    cout<<"Maaf Kamu Belum Berhasil Menjadi Calon Programmer"<< endl;
  }
  return 0;
}
