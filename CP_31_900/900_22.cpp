#include<iostream>
#include<vector>
using namespace std;
long long binexp(long long a,long long b)
{
    long long ans=1;
    //a%=mod;

    while(b)
    {
        if(b&1)
            ans = (ans*a) ;

        a =(a*a) ;
        b>>=1;
    }

    return ans;
}
int main(){
    int t ;
    cin >> t ;
    while (t--)
    {
        int n ;
        cin >> n ;
        vector<long long> a(n+1) ;
        long long sum = 0 ; 
        int ct1 = 0 , ct2 = 0 ;
        for (int i = 1 ; i <= n ; i++)
        {
            cin >> a[i] ;
            sum += a[i] ;
            if(a[i] == 1) ct1++ ;
            if(a[i] == 0) ct2++ ;
        }
    cout << ct1 * binexp(2,ct2) << endl ;
    }
    
    return 0;
}