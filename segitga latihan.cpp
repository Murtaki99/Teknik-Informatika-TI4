#include <iostream>

using namespace std;

int main(){
	float luas;
	int a,t;
	
	cout<<"=======================================\n"<<endl;
	cout<<"Menghitung Luas segitiga : "<<endl;
	cout<<"=======================================\n"<<endl;
	cout<<"Masukkan alas : ";
	cin>>a;
	cout<<"Masukkan tinggi : ";
	cin>>t;
	luas=0.5*a*t;
	
	
	cout<<"luas segitiga adalah  "<< luas<<endl;
	
	return 0;
}
