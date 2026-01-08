#include <iostream>
using namespace std;

int main() {

int a; 
int i;
int sayac=0;
cout << "lutfen bir deger giriniz : " << endl; 
cin >> a; 

while ( a != 0 )  { a=a/10; sayac++;  }  cout << sayac; 

    return 0;
}