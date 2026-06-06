// Repeated squaring  

#include<iostream>
using namespace std;

long long binexp(long long a,long long b)
{
    long long ans = 1 ;

    while(b)
    {
        if(b&1){
            ans *= a ;
        }
        a *= a ;
        b>>=1 ;
    }

return ans ;
}

long long binexp(long long a,long long b,long long mod)
{
    long long ans = 1;

    while(b)
    {
        if(b&1)
            ans=(ans*a)%mod;

        a=(a*a)%mod;

        b>>=1;
    }

    return ans;
}



long long recursive_binexup(long long a , long long b){
    if (b == 0)
    {
        return 1 ;
    }
    
    long long M = recursive_binexup(a,b/2) ;
    if (b%2)
    {
        return a*M*M ;
    }
    else
    {
        return M*M ;
    }
    
    

}

int gcd(int a , int b){

    if(b%a == 0) return a ;
    return gcd(b%a,a) ;
}

int main(){
    cout << gcd(12,18) ;
return 0;
}