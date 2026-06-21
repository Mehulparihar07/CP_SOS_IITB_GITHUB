#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(){
    int t ;
    cin >> t ;
    while (t--)
    {
        long long n , x ;
        cin >> n >> x ;
        vector<long long> a(n+1) ;
        long long sum = 0 ;
        long long mika = 0 ;
        for (long long i = 1 ; i <= n ; i++)
        {
            cin >> a[i] ;
            sum += a[i] ;
            mika += (a[i] + x - 1) / x ;
        }
    cout << ( sum + x - 1 ) / x << " " << mika << endl ;    
    }
    

    return 0;
}