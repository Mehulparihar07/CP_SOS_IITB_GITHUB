#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    long long n , k ;
    cin >> n >> k ;
    vector<long long> a(n) ;
    for (long long i = 0 ; i < n ; i++)
    {
        cin >> a[i] ;
    }
    sort(a.begin() , a.end()) ;
    long long low = 0 , high = k + 1 , mid ;
    while (high - low > 1)
    {
        mid = (low + high) / 2 ;
        //long long mika = k - mid ;
        long long sum = 0 ;
        for (long long i = (n+1)/2 ; i < n ; i++)
        {
            sum += max(0LL , a[(n-1)/2] + mid - a[i]) ;
        }
        if (sum <= k - mid)
        {
           low = mid ;
        }
        else
        {
            high = mid ;
        }    
    }
    cout << a[(n-1)/2] + low << endl ;

    return 0;
}