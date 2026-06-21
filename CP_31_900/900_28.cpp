#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t ;
    cin >> t ;
    while (t--)
    {
        long long n , k ;
        cin >> n >> k ;
        long long max_median = 0 ;
        long long sum = 0 ;
        vector<long long> a((n*k) + 1) ;
        for (long long i = 1 ; i <= (n*k) ; i++)
        {
            cin >> a[i] ;
            sum += a[i] ;
        }  
        long long x = (n + 1) / 2 ;
        long long p ;
        if (n % 2)
        {
             p = (n*k) - x + 1 ;
        }
        if (n % 2 == 0)
        {
             p = (n*k) - x ;
        }
        
            for (int i = 1 ; i <= k ; i++)
            {
               max_median +=  a[p] ;
               p = p - (n-x+1) ;
            }

        cout << max_median << endl ;     
        
    }
    
    return 0;
}