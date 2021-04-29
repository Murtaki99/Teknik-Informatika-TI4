#include <iostream>

using namespace std;

int main(){
	int r,luas;
	const float phi=3.14;
	cout<<"=======================================\n"<<endl;
	cout<<"Menghitung Luas lingkaran : "<<endl;
	cout<<"=======================================\n"<<endl;
	cout<<"Masukkan jari-jari : ";
	cin>>r;
	luas=phi*r*r;
	
	
	cout<<"luas lingkaran adalah  "<< luas<<endl;
	
	return 0;
}
