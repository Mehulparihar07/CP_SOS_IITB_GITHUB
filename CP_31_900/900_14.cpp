#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t ;
    cin >> t ;
    while (t--)
    {
        long long n ;
        cin >> n ;
        long long x , y ;
        bool csk = false ;
        bool rcb = false ;
        // x - min buses 
        // y - max buses
        if (n % 6 == 0 )
        {
            x = n / 6 ;
            rcb = true ;
        }
        if (n % 6 == 4 || n % 6 == 2)
        {
            x = n / 6 + 1 ;
            rcb = true ;
        }
        if (n % 4 == 0 || n % 4 == 2 )
        {
            y = n / 4 ;
            csk = true ;
        }
        
        if ((csk && rcb) && (x != 0 && y != 0))
        {
            cout << x << " " << y << endl ;
        }
        
        else
        {
            cout << "-1" << endl ;
        }
        
    }
    
return 0;
}