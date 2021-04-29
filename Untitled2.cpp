#include <iostream>
using namespace std;
 main()
{     char Nama[100],Nim[40],Jurusan[35],Prodi[30];
      int  i, j, n;
      cout<<"===========================\n"<<endl;
      
      cout<<"Masukkan Nama    : ";
      cin>> Nama;
      cout<<"Masukkan Nim     : ";
      cin>> Nim;
      cout<<"Masukkan jurusan :";
      cin>> Jurusan;
      cout<<"Masukkan Prodi   :";
      cin>> Prodi;
      
      cout << "Masukkan jumlah baris:  ";
      cin >> n;
      for (i = 1; i <= n; i++)
      {
            for (j = 1; j <= i; j++)
            {
                  cout << "* ";
            }
            //Bagian akhir
            cout << "\n";
      }
      return 0;
}
