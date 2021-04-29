#include <iostream>
#include <conio.h>
using namespace std;
    main(){ 
    
    int pil,jum;

    cout<<"*********DAFTAR HARGA***********"<<endl;
    cout<<"1. EKONOMI"<<endl;
    cout<<"2. BISNIS"<<endl;
    cout<<"3. EKSEKUTIF"<<endl;
    cout<<"---------------------------------------"<<endl;

    cout<<"Masukan Pilihan = ";
    cin>>pil;

    switch(pil) {
    case 1 :
            cout<<"Harga  Rp 10.000/buah" <<endl;
            cout<<"Masukan Jumlah: ";
            cin>>jum;
            cout<<endl;
            cout<<"Total Bayar "<<jum*10000<<endl;
    break;
    case 2 :
            cout<<"Harga campedak Rp 5.000/buah" <<endl;
            cout<<"Masukan Jumlah: ";
            cin>>jum;
            cout<<endl;
            cout<<"Total Bayar "<<jum*5000<<endl;
    break;
    case 3 :
            cout<<"Harga tempoyak Rp 20.000/kilo" <<endl;
            cout<<"Masukan Jumlah: ";
            cin>>jum;
            cout<<endl;
            cout<<"Total Bayar "<<jum*20000<<endl;
    break;

    default : cout<<"Pilihan Anda Salah";

    }

getch();

}
