#include <iostream>
using namespace std;
int main(){
    int rumus,r,pi,A,t,p,l,s;
    float luas;
    cout<<"masukan nomor : ";
    cin>>rumus;
    switch(rumus){
    	
    	cout<<"====MENGHITUNG VOLUME BANGUN RUANG DAN LUAS BANGUN DATAR===="<<endl;
    	cout<<"Luas segitiga"<<endl;
    	cout<<"Luas persegi panjang"<<endl;
    	cout<<"Luas lingkaran"<<endl;
    	cout<<"Volume tabung"<<endl;
    	cout<<"Volume kerucut"<<endl;
    	cout<<"======================================\n"<<endl;


        case 1 :
            cout<<"masukan luas segitiga ";
    cin>>r;
    cout<<"masukan_pi ";
    cin>>pi;
    luas=pi*r*r;
    cout<<"luas lingkaran : "<<luas;
        break;
        case 2 :
            cout<<"masukan tinggi segitiga ";
    cin>>t;
    cout<<"masukan nilai alas ";
    cin>>A;
    luas=A*t*1/2;
    cout<<"luas segitiga : "<<luas;
        break;
        case 3 :
            cout<<"masukan panjang persegi panjang ";
    cin>>p;
    cout<<"masukan luas persegi panjang ";
    cin>>l;
    luas=p*l;
    cout<<"panjang persegi panjang : "<<luas;
        break;
        case 4 :
            cout<<"masukan sisi1 ";
    cin>>s;
    cout<<"masukan sisi2 ";
    cin>>s;
    luas=s*s;
    cout<<"luas persegi : "<<luas;
        break;

        default:
            cout<<"anda salah pilih, terimakasih";
    }
    return 0;
}
