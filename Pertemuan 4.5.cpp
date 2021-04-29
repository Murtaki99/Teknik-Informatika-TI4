#include <iostream>

using namespace std;
 
int main() {
	float luas,panjang,lebar ;
	
	cout<< " MENGHITUNG LUAS PERSEGI PANJANG "<<endl;
	cout<< "==================================="<<endl;
	cout<< "Masukkan panjang     : ";
	cin>> panjang;
	cout<<"Masukkan lebar       : ";
	cin>>lebar;
	luas=panjang*lebar;
	cout <<"Luas Persegi Panjang : "<<luas<<endl;
	
	return 0;
}
