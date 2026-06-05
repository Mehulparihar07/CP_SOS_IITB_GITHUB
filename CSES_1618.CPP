#include<iostream>
using namespace std;

int main(){
    long long n ;
    cin >> n ;
    long long q , r ;
    long long ct1 = 0 ;
    long long ct2 = 0 ;
    q = 2 ;
    r = 5 ;
    while ((n / q) != 0)
    {
        ct1 += n / q ;
        q *= 2 ;
    }
    while ((n / r) != 0)
    {
        ct2 += n / r ;
        r *= 5 ;
    }
    cout << min(ct1 , ct2) << endl;
    return 0;
}