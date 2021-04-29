#include<iostream>
#include<stdio.h>
using namespace std;
main()
{
	char nama[100],nim[30],jurusan[50];
	int nilai;
	
	cout<<"buat program untuk menghitung nilai mahasiawa"<<endl;
	cout<<endl;
	cout<<"masukan nama : ";
	cin>>nama;
	cout<<"masukan nim  : ";
	cin>>nim;
	cout<<"masukan jurusan : ";
	cin>>jurusan;
	cout<<"masukan nilai : ";
	cin>>nilai;
	
	cout<<"nama: "<<nama<<endl;
	cout<<"nim: "<<nim<<endl;
	cout<<"jurusan: "<<jurusan<<endl;
	cout<<"nilai: "<<nilai<<endl;
	
	if(nilai>= 100)
	{
		cout<<"grade : A"<<endl;
		cout<<"anda dinyatakan lulus"<<endl;
	}
	    else if(nilai>=66 && nilai<=88)
	{
		cout<<"grade : B"<<endl;
		cout<<"anda dinyatakan lulus"<<endl;
	 }
	     else if(nilai>=55 && nilai<=65)
	{
		cout<<"grade : C"<<endl;
		cout<<"anda dinyatakan lulus"<<endl;
	 }
	     else if(nilai>=45 && nilai<=54)
	{
		cout<<"grade : D"<<endl;
		cout<<"anda dinyatakan tidak lulus"<<endl;
	 }
	     else if(nilai>=54 && nilai<=45)
	     {
		cout<<"grade : E"<<endl;
		cout<<"anda harus mengulang kembali"<<endl;
	    return 0;
	}
}
