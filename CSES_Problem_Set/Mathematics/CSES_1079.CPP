#include<iostream>
#include<vector>
using namespace std;

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

       const int N = 1e6 ;
       const long long MOD = 1e9 + 7 ;
       vector<long long> fact(N+1) ;
       //vector<long long> invfact(N+1) ;
       fact[0] = 1 ;

       //vector<long long> fact(N + 1);
        for (int i = 1; i <= N; i++) {
            fact[i] = fact[i - 1] * i % MOD;
        }
        
        long long n ;
        cin >> n ;
        while (n--)
        {
            long long a , b ;
            cin >> a >> b ;
            
            cout << fact[a] * binexp(fact[b], MOD - 2) % MOD
              * binexp(fact[a-b], MOD - 2) % MOD << endl ;
        }
        
        
    return 0;
}