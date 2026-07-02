#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t ;
    cin >> t ;
    while (t--)
    {
        long long n , k , q ;
        cin >> n >> k >> q ;
        vector<long long> a(n+1) ;
        vector<long long> s ;
        long long count = 0 , ans = 0 ;
        //bool mika = false;
        for (long long i = 1 ; i <= n ; i++)
        {
            cin >> a[i] ;
            if (a[i] <= q)
            {
                count++ ;
            }
            else
            {
                if (count >= k )
                {
                    s.push_back(count) ;
                }
                count = 0 ;
            }
            
            
        }
        long long x ;
        if (count == n)
        {
            if (n >= k)
            {
                x = n - k + 1 ;
                cout << (x * ( x + 1 )) / 2 << endl ;
            }
            else
            {
                cout << 0 << endl ;
            }
            
        }
        else
        {

            if (s.size() == 0 && count < k)
            {
                cout << 0 << endl ;
            }
            else if (count != 0 && count >= k)
            {
                s.push_back(count) ;
                 for (long long i = 0 ; i < s.size() ; i++)
                {
                    x = s[i] - k + 1 ;
                    ans += (x * ( x + 1 )) / 2 ;
                }
            cout << ans << endl ;
            }
            
            else
            {
                for (long long i = 0 ; i < s.size() ; i++)
                {
                    long long x = s[i] - k + 1 ;
                    ans += (x * ( x + 1 )) / 2 ;
                }
            cout << ans << endl ;    
            }
            
        }
        
        
    }
    
    return 0;
}