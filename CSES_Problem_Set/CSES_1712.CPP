#include<iostream>
using namespace std;

long long binexp(long long a,long long b,long long mod)
{
    long long ans=1;
    a%=mod;

    while(b)
    {
        if(b&1)
            {ans=(ans*a)%mod;}

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
        long long a , b , c;
        cin >> a >> b >> c ;
        cout << binexp(a ,binexp(b,c,1e9+6),1e9+7) << endl;
    }
    
    return 0;
}