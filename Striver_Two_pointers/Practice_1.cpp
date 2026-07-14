#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n , k ;
    cin >> n >> k ;
    vector<int> a(n) ;
    int lsum = 0 , rsum = 0 ;
    int ans = 0 ;
    for (int i = 0 ; i < n ; i++)
    {
        cin >> a[i] ;
    }
    for (int i = 0 ; i < k ; i++)
    {
        lsum += a[i] ;
    }
    ans = lsum ;
    for (int i = k - 1 ; i > 0 ; i--)
    {
        lsum -= a[i] ;
        rsum += a[n-i-1] ;
        ans = max(ans,lsum + rsum) ;
    }
    
    cout << ans ;
    return 0;
}