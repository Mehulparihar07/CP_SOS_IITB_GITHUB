#include<iostream>
using namespace std;

int main(){
    int t ;
    cin >> t ;
    while (t--)
    {
        long long n , k , x ;
        cin >> n >> k >> x ;
        long long p = k *( k + 1 ) / 2 ;
        long long q = k * (2*n - k + 1) / 2 ;

        if (x >= p && x <= q)
        {
            cout << "YES" << endl ;
        }
        
        else
        {
            cout << "NO" << endl ;
        }
        
    }
    
return 0;
}