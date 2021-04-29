#include <iostream>
using namespace std;

int main()

{
for (int a = 1; a <= 10; a++)
{
for (int b = 1; b <= a; b++)
{
cout << "*";
}
cout << endl;
}



for (int a = 1; a >= 1; a--)
{
for (int b = 1; b <= a; b++)
{
cout << "*";
}
cout << endl;
 }
 
 for (int a = 1; a <= 1; a++)
{
int b = a - 1;
for (int c = 1; c <= b; c++)
{
cout << " ";
}
b = (2 * 1) - (2 * a - 1);
for (a = 1; b <= b; b++)
{
cout << "*";
}
cout << endl;
}
}


