#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t ;
    cin >> t ;
    while (t--)
    {
        int n ;
        cin >> n ;
        long long k = 0 ;
        vector<long long> a(n+1) ;
        for (int i = 1 ; i <= n ; i++)
        {
            cin >> a[i] ;
        }
        for (int i = 1 ; i < n ; i++)
        {
            k = max(k , a[i] - a[i+1]) ;
        }
        for (int i = 2 ; i <= n ; i++)
        {
            if (a[i] < a[i-1])
            {
                a[i] += k ;
            }
        }
        bool CSK = true ;
        for (int i = 1 ; i < n ; i++)
        {
            if (a[i] > a[i+1])
            {
                CSK = false ;
                cout << "NO" << endl ;
                break ;
            }
            
        }
        if (CSK)
        {
            cout << "YES" << endl ;
        }
        
        
    }
    
return 0;
}