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
      long long n ;
      cin >> n ;
      //p = n ;
      long long p = n , q = n ;
      long long a = 0 , b = 0 , cnt = 0 ;
      while (p % 2 == 0 || q % 3 == 0)
      {
        if (p % 2 == 0)
        {
            a += 1 ;
            p /= 2 ;
        }
        else
        {
            b += 1 ;
            q /= 3 ;
        } 
      }
      
      if (n != (binexp(2,a)) * binexp(3,b))
      {
        cout << -1 << endl ;
      }
      else
      {
        if (a > b)
        {
           cout << -1 << endl ;
        }
        else
        {
            cout << 2*b - a << endl ;
        }
        
        
      }
      
      

    }
    
    return 0;
}