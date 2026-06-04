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
    int n ;
    cin >> n ;
    while (n--)
    {
        long long a , b ;
        cin >> a >> b ;
        cout << binexp (a,b) << endl ; 
    }
    
    return 0;
}