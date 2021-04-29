#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int a,b,i;
	a=-2;
	cout << "bilangan genap(2-100) adalah: "<< endl;
	
	for(i=2;i<=60;i++)
	
	{
		b=2+a;
		cout<<b<<" ";
		a=b;
		
	}
	
	getch();
}
