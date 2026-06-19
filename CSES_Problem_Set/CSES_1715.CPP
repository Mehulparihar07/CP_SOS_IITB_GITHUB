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
    string s ;
    cin >> s ;
    long long M = 1e9 + 7 ;

    vector<long long> cnt(26,0) ;
    for (char c : s)
    {
        cnt[c - 'a']++ ;
    }
    long long N = 1e6 ;
    vector<long long> factorial(N + 1) ;
    long long fact = 1 ;
    factorial[0] = 1 ;
    for (long long i = 1 ; i <= N ; i++)
    {
        factorial[i] = factorial[i - 1] * i % M ;
    }
    for (int i = 0 ; i < 26 ; i++)
    {
        fact = factorial[cnt[i]] * fact % M ;
    }
    
    cout << (factorial[s.size()] * (binexp(fact , M-2))) % M << endl ; 
    return 0;
}