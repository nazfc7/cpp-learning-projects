
// 1'den girilen sayıya kadar olan çift sayıları yazdır

#include <iostream> 
using namespace std; 
int main () 
{ 
    int x = 1; 
    int a; 

    cout <<"Lutfen bir sayi giriniz : " << endl; 
    
    cin >> a ; 
    
    while (x <= a) 
    {  
      
       
      if (x % 2 == 0)
      {
        cout << x ;
      }
      
     x++ ; 
     
    } 

}