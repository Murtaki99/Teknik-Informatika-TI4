#include <iostream>


using namespace std;

main () {
	char nama[100],nim[30],jurusan[40];
	int nilai;
	
	cout<<"buat program menghitung grade mahasiswa"<<endl;
	cout<<endl;
	cout<<"masukkan nama    : ";
	cin>>nama;
	cout<<"masukkan nim     : ";
	cin>>nim;
	cout<<"masukkan jurusan : ";
	cin>>jurusan;
	cout<<"masukkan nilai   : ";
	cin>>nilai;
	
	cout<<"nama "<<nama<<endl;
	cout<<"nim "<<nim<<endl;
	cout<<"jurusan "<<jurusan<<endl;
	cout<<"nilai "<<nilai<<endl;
	
	if(nilai>= 100)
	{
	cout<<"grade :A"<<endl;
	cout<<"anda di nyatakan lulus ";
	}
	else if(nilai>=66 && nilai<=88)
	{
		cout<<"grade : B"<<endl;
		cout<<"anda dinyatakan lulus"<<endl;
    }
    else if(nilai>=54 && nilai<=65)
    {
    	cout<<"grade : C"<<endl;
    	cout<<"anda dinyatakan lulus"<<endl;
	}
	else if(nilai>=45 && nilai<=53)
    {
    	cout<<"grade : D"<<endl;
    	cout<<"anda dinyatakan lulus"<<endl;
    }
    else if(nilai>=34 && nilai<=44)
    {
    	cout<<"grade : E"<<endl;
		cout<<"anda harus mengulang kembali"<<endl;
	    return 0;
  } 
	
}
