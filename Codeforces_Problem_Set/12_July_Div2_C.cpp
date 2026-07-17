#include<iostream>
#include<vector>
#include<map>
using namespace std;
long long mod=1000000007 ;
long long binexp(long long a,long long b,long long mod=1000000007)
{
    long long ans=1;
    a%=mod;

    while(b)
    {
        if(b&1)
            ans=(ans*a)%mod;

        a=(a*a)%mod;
        b>>=1;
    }

    return ans;
}
int main(){
    int t ;
    cin >> t ;
    while (t--)
    {
        long long n , l = 0 ;
        cin >> n ;
        vector<long long> a(n) ;
        bool mika = false ;
        map<long long , long long> mp ;
        for (long long i = 0 ; i < n ; i++)
        {
            cin >> a[i] ;
            if (a[i] == -1)
            {
                mika = true ;
            }  
            mp[a[i]]++ ;  
        }
        for (long long i = 1 ; i < n && mika ; i++)
        {
            if ((a[i] - a[i-1]) == 1)
            {
                l++ ;
            }
            
        }
        

    cout << (binexp(2 , n - (long long)mp.size()) * ((l+1) % mod)) % mod << endl ;    
    }
    
    return 0;
}