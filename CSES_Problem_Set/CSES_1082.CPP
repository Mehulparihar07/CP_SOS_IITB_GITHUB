#include<iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;

    long long l = 1 ;
    long long ans = 0 ;
    long long k = 1e9 + 7 ;
    while (l <= n)
    {
        long long q = n / l ;
        long long r = n / q ;
        long long a = r - l + 1 ;
        long long b = l + r ;
        
        if(a % 2) b /= 2 ;
        else a /= 2 ;

        q %= k;
        a %= k;
        b %= k;

        long long contrib = q * a % k;
        contrib = contrib * b % k;

        ans = (ans + contrib) % k;

        l = r + 1 ;
    }

    cout << ans << endl ;
    return 0;
}