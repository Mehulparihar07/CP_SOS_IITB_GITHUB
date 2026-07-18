#include <bits/stdc++.h>
using namespace std;

int main() {
    int t ;
    cin >> t ;
    while (t--)
    {
        long long a , b ;
        cin >> a >> b ;
        long long xr = 0 ;
        for (long long i = 1 ; i <= 3 * 1e5 && i != a ; i++)
        {
            xr ^= i ;
            if (xr == b)
            {
                if (i > a)
                {
                    cout << i << endl ;
                    break ;
                }
                else
                {
                    cout << i + 1 << endl ;
                    break ;
                }
                
                
            }
            
        }
        
    }
    
    
    return 0 ;
}