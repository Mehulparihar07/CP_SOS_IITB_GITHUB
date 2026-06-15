#include<iostream>
#include<vector>
using namespace std;

int main(){
    long long n , k ;
    cin >> n >> k ;
    vector<long long> a(k) ;
    for (int i = 0 ; i < k ; i++)
    {
        cin >> a[i] ;
    }
    long long ans = 0 ;
    for (int mask = 1 ; mask < (1 << k) ; mask++)
    {
        long long contribution = n ;
        long long count = 0 ;
        long long num = mask ;
        long long i = 0 ;
        while (num)
        {
            if ((num & 1))
            {   
                count++ ;
                contribution /= a[i] ;
            }
        num >>= 1 ;
        i++ ;    
        }
        if (count % 2)
        {
            ans += contribution ;
        }
        if (count % 2 == 0)
        {
            ans -= contribution ;
        } 
    }
    cout << ans << endl ;
    
    return 0;
}