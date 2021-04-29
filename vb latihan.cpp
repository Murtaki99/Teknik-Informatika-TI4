#include <iostream>
using namespace std;

int main(){
	
	int r,t,volume;
	
	cout<<"menghitung volume tabung  " <<endl;
	cout<<"============================== "<<endl;
	cout<<"Masukkan jari-jari : ";
	cin>>r;
	cout<<"masukkan tinggi : ";
	cin>>t;
	volume=22*r*r*t/7;
	cout<<"Volume tabung adalah: "<<volume;
	return 0;
}
