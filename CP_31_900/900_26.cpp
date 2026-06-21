#include<iostream>
using namespace std;

int main(){
    int t ;
    cin >> t ;
    while (t--)
    {
       long long n ;
       cin >> n ;
       bool mika = true ;
       if (n % 2)
       {
        cout << "YES" << endl ;
        mika = false ;
       }
       else
       {
        while (n > 1)
        {
            n /= 2 ;
            if (n % 2 && n != 1)
            {
              cout << "YES" << endl ;
              mika = false ;  
              break ;
            }
            
        }
        
       }
       if (mika)
       {
        cout << "NO" << endl ;
       }
       
    }
    
    return 0;
}
