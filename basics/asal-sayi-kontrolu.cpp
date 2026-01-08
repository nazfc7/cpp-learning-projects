#include <iostream>
using namespace std;

int main()
{
    int n;
    bool asal = true;

    cout << "Lutfen bir sayi giriniz: ";
    cin >> n;
    
    if (n <= 1)
    { cout << "Asal degil"; return 0;}

    for (int i = 2; i < n; i++) 
    {  if (n % i == 0)  { asal = false; 
    
    break; }  }

    if (asal == true) {
        cout << "Asal sayi"; }
    else {
        cout << "Asal degil"; }

    return 0;
}