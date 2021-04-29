#include <iostream>

using namespace std;
int main (int argc,char const*argv[])
{
 cout<<"MURTAKI>COM\n\n";
 
 char nama [20];
 char nilaimahsiswa, j;
 char nilaimahasiswa, nm,l;
 cout<<"//--------------------------------//\n";
 cout<<"Program Perhitungan Nilai Mahasiswa \n\n";
 cout<<"Masukan Nama Mahasiswa : ";cin.getline(nama, sizeof(nama));
 cout<<"Masukan Nim  : ";cin>>nm;
 cout<<"Masukan JURUSAN  : ";cin>>j;
 cout<<"Masukan nilai  : ";cin>>l;
 cout<<"//--------------------------------//\n";
 
 //Proses hitung nilai rata-rata
 //
 nilai = (nm+j+l)/2.5;
 cout<<"//==========HASIL=========\\";
 cout<<"Nama Mahasiswa\t  : "<<nama<<endl;
 cout<<" NIM\t      : "<<nm<<endl;
 cout<<" JURUSAN\t  : "<<j<<endl;
 cout<<"nilai\t     : "<<l<<endl;
 //
 if (nilai >= 90) {
  //Hasil Perhitungan
  cout<<"Skor  \t : A \n";
 } else if ((nilai>=80) && (nilai < 90)) {
  cout<<"Skor  \t : B \n";
 } else if ((nilai<80) && (nilai < 70)) {
  cout<<"Skor  \t : C \n";
 } else if ((nilai>=70) && (nilai < 60)) {
  cout<<"Skor  \t : D \n";
 } else if (nilai < 60) {
  cout<<"Skor  \t : E \n";
 }
 cout<<"//--------------------------------//\n";
 //Keluar dari Proses
 cin.get();
 return 0;
}

