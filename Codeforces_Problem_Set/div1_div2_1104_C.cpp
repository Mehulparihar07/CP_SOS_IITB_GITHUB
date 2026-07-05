#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    long long t ;
    cin >> t ;
    while (t--)
    {
        long long n ;
        cin >> n ;
        long long mx =  LLONG_MIN ;
        //long long k ;
        vector<long long> a(n+1) ;
        for (long long i = 1 ; i <= n ; i++)
        {
            cin >> a[i] ;  
        }
        for (long long i = 1 ; i < n ; i++)
        {
            if (a[i] > a[i+1])
            {
                a[i+1] = a[i+1] + a[i] ;
                a[i] = a[i+1] - a[i] ;   
            }   
        }
        for (long long i = 1 ; i <= n ; i++)
        {
            mx = max(a[i] , mx) ;
        }
    cout << mx << endl ;    
    }
    
    return 0;
}