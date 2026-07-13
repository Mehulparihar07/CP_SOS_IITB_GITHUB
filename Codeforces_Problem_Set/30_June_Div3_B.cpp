#include<iostream>
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
    int t ;
    cin >> t ;
    while (t--)
    {
        long long x ;
        cin >> x ;
        int count = 0 ;
        while (x != 0)
        {
            count++ ;
            x /= 10 ;
        }
    cout << binexp(10 , count) + 1 << "\n" ;    
    }
    
    return 0;
}